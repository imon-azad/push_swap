/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 03:45:05 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 04:00:53 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ra(t_stack *lst)
{
	int	i;
	int	*saved;
	int	tmp;

	i = 0;
	saved = (int *)malloc((lst->a_len) * sizeof(int));
	if (!saved)
		exit(EXIT_FAILURE);
	tmp = lst->a_stack[0];
	while (i < lst->a_len)
	{
		saved[i] = lst->a_stack[i + 1];
		i++;
	}
	free(lst->a_stack);
	saved[i - 1] = tmp;
	lst->a_stack = saved;
	if (lst->print == 1)
		write(1, "ra\n", 3);
	lst->print = 1;
	return (lst);
}

t_stack	*rb(t_stack *lst)
{
	int	i;
	int	*saved;
	int	tmp;

	i = 0;
	saved = (int *)malloc((lst->b_len) * sizeof(int));
	if (!saved)
		exit(EXIT_FAILURE);
	tmp = lst->b_stack[0];
	while (i < lst->b_len)
	{
		saved[i] = lst->b_stack[i + 1];
		i++;
	}
	free(lst->b_stack);
	saved[i - 1] = tmp;
	lst->b_stack = saved;
	if (lst->print == 1)
		write(1, "rb\n", 3);
	lst->print = 1;
	return (lst);
}

t_stack	*rr(t_stack *lst)
{
	lst->print = 0;
	ra(lst);
	lst->print = 0;
	rb(lst);
	write(1, "rr\n", 3);
	return (lst);
}
