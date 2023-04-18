/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 03:37:26 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 04:22:28 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_max_a(t_stack *lst)
{
	int	i;
	int	max;

	i = 0;
	max = lst->a_stack[i];
	while (i < lst->a_len)
	{
		if (lst->a_stack[i] > max)
			max = lst->a_stack[i];
		i++;
	}
	return (max);
}

int	num_min_a(t_stack *lst)
{
	int	i;
	int	min;

	i = 0;
	min = lst->a_stack[i];
	while (i < lst->a_len)
	{
		if (lst->a_stack[i] < min)
			min = lst->a_stack[i];
		i++;
	}
	return (min);
}

int	num_max_b(t_stack *lst)
{
	int	i;
	int	max;

	i = 0;
	max = lst->b_stack[i];
	while (i < lst->b_len)
	{
		if (lst->b_stack[i] > max)
			max = lst->b_stack[i];
		i++;
	}
	return (max);
}

int	num_min_b(t_stack *lst)
{
	int	i;
	int	min;

	i = 0;
	min = lst->b_stack[i];
	while (i < lst->b_len)
	{
		if (lst->b_stack[i] < min)
			min = lst->b_stack[i];
		i++;
	}
	return (min);
}
