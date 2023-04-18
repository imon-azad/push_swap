/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_16+.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:15:38 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 22:21:26 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	up_down(t_stack *lst)
{
	int	i;

	i = 0;
	while (i < lst->b_len)
	{
		if (lst->b_stack[i] == lst->to_find)
		{
			if ((lst->b_len / 2) - i > 0)
				return (0);
			else
				return (1);
		}
		i++;
	}
	return (-1);
}

void	order_b(t_stack *lst)
{
	if (lst->b_stack[0] == lst->to_find - 1 && lst->control == 0)
	{
		pa(lst);
		lst->control = 1;
	}
	if (lst->b_stack[0] == lst->to_find)
	{
		pa(lst);
		lst->to_find--;
		if (lst->control == 1)
		{
			lst->to_find--;
			lst->control = 0;
			sa(lst);
		}
		if (lst->control == 2)
		{
			lst->to_find = lst->to_find - 2;
			lst->control = 0;
			sa(lst);
			rra(lst);
		}
	}
	else
		rb(lst);
}

void	order_b_down(t_stack *lst)
{
	if (lst->b_stack[0] == lst->to_find - 2 && lst->control == 1)
	{
		pa(lst);
		ra(lst);
		lst->control = 2;
	}
	if (lst->b_stack[0] == lst->to_find - 1)
	{
		pa(lst);
		lst->control = 1;
	}
	if (lst->b_stack[0] == lst->to_find)
	{
		pa(lst);
		lst->to_find--;
		if (lst->control == 1)
		{
			lst->to_find--;
			lst->control = 0;
			sa(lst);
		}
	}
	else
		rrb(lst);
}

void	move_to_a(t_stack *lst)
{
	while (lst->a_len < lst->len_original)
	{
		if (lst->b_stack[0] == lst->to_find && lst->control == 0)
		{
			pa(lst);
			lst->to_find--;
		}
		if (up_down(lst) == 1)
			order_b_down(lst);
		else
			order_b(lst);
	}
}

void	move_to_b(t_stack *lst)
{
	lst->limit_num = (lst->len_original / lst->cont) * (lst->i);
	if (lst->i == lst->cont)
		lst->limit_num = lst->len_original - 3;
	while (lst->b_len < lst->limit_num && lst->i <= lst->cont)
	{
		if (lst->a_stack[0] < lst->limit_num)
			pb(lst);
		else
			ra(lst);
	}
	lst->i++;
	if (lst->a_len == 3)
	{
		len_three(lst);
		lst->to_find = lst->to_find - 3;
	}
	if (lst->i <= lst->cont)
		move_to_b(lst);
	while (lst->i-- > 0)
		move_to_a(lst);
}
