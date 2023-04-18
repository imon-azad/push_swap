/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 04:04:46 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 05:15:28 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*rra(t_stack *lst)
{
	int	i;
	int	j;
	int	*saved;

	i = 0;
	j = 1;
	saved = (int *)malloc((lst->a_len) * sizeof(int));
	if (!saved)
		exit(EXIT_FAILURE);
	saved[0] = lst->a_stack[lst->a_len - 1];
	while (i < lst->a_len - 1)
	{
		saved[j] = lst->a_stack[i];
		i++;
		j++;
	}
	free(lst->a_stack);
	lst->a_stack = saved;
	if (lst->print == 1)
		write(1, "rra\n", 4);
	lst->print = 1;
	return (lst);
}

t_stack	*rrb(t_stack *lst)
{
	int	i;
	int	j;
	int	*saved;

	i = 0;
	j = 1;
	saved = (int *)malloc((lst->b_len) * sizeof(int));
	if (!saved)
		exit(EXIT_FAILURE);
	saved[0] = lst->b_stack[lst->b_len - 1];
	while (i < lst->b_len - 1)
	{
		saved[j] = lst->b_stack[i];
		i++;
		j++;
	}
	free(lst->b_stack);
	lst->b_stack = saved;
	if (lst->print == 1)
		write(1, "rrb\n", 4);
	lst->print = 1;
	return (lst);
}

t_stack	*rrr(t_stack *lst)
{
	lst->print = 0;
	rra(lst);
	lst->print = 0;
	rrb(lst);
	write(1, "rrr\n", 4);
	return (lst);
}
