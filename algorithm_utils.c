/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 05:27:04 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 18:49:32 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_b(t_stack *lst)
{
	int	*tmp;

	tmp = (int *)malloc(lst->a_len * sizeof(int));
	return (tmp);
}

void	copy_stack(t_stack *lst)
{
	int	i;

	i = 0;
	lst->cpy_stack = (int *)malloc(sizeof(int) * lst->a_len);
	if (!lst->cpy_stack)
		exit(EXIT_FAILURE);
	while (i < lst->a_len)
	{
		lst->cpy_stack[i] = lst->a_stack[i];
		i++;
	}
}

void	order_array(t_stack *lst)
{
	int	i;
	int	j;
	int	min;

	j = 0;
	i = 0;
	while (i < lst->a_len)
	{
		min = i;
		j = i + 1;
		while (j < lst->a_len)
		{
			if (lst->cpy_stack[j] < lst->cpy_stack[min])
				min = j;
			j++;
		}
		ft_swap(&lst->cpy_stack[i++], &lst->cpy_stack[min]);
	}
	change_array(lst, i, j);
}

void	change_array(t_stack *lst, int i, int j)
{
	i = 0;
	while (i < lst->a_len)
	{
		j = 0;
		while (j < lst->a_len)
		{
			if (lst->cpy_stack[j] == lst->a_stack[i])
			{
				lst->a_stack[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}
