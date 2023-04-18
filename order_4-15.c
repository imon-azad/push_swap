/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_4-15.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 05:23:33 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 05:24:17 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	len_four_to_fifteen(t_stack *lst)
{
	int	i;

	while (lst->a_len > 3)
	{
		i = 0;
		lst->min_a = num_min_a(lst);
		if (lst->a_stack[i] == lst->min_a)
			pb(lst);
		else
		{
			while (lst->a_stack[i] != lst->min_a && i < lst->a_len)
				i++;
			if (i <= (lst->a_len / 2))
				ra(lst);
			else
				rra(lst);
		}
	}
	len_three(lst);
	while (lst->b_len != 0)
		pa(lst);
}
