/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 05:15:20 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 05:21:36 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	len_three(t_stack *lst)
{
	if (lst->a_stack[0] < lst->a_stack[1] && lst->a_stack[1] > lst->a_stack[2]
		&& lst->a_stack[0] < lst->a_stack[2])
	{
		rra(lst);
		sa(lst);
	}
	else if (lst->a_stack[0] > lst->a_stack[1]
		&& lst->a_stack[1] < lst->a_stack[2]
		&& lst->a_stack[0] > lst->a_stack[2])
		ra(lst);
	else if (lst->a_stack[0] > lst->a_stack[1]
		&& lst->a_stack[1] > lst->a_stack[2]
		&& lst->a_stack[0] > lst->a_stack[2])
	{
		sa(lst);
		rra(lst);
	}
	else if (lst->a_stack[0] < lst->a_stack[1]
		&& lst->a_stack[1] > lst->a_stack[2]
		&& lst->a_stack[0] > lst->a_stack[2])
		rra(lst);
	else if (lst->a_stack[0] > lst->a_stack[1]
		&& lst->a_stack[1] < lst->a_stack[2]
		&& lst->a_stack[0] < lst->a_stack[2])
		sa(lst);
}
