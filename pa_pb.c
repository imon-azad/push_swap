/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 04:03:28 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 04:04:01 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*pa(t_stack *lst)
{
	remove_b(lst);
	add_a(lst);
	write(1, "pa\n", 3);
	return (lst);
}

t_stack	*pb(t_stack *lst)
{
	remove_a(lst);
	add_b(lst);
	write(1, "pb\n", 3);
	return (lst);
}
