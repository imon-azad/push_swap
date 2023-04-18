/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 04:01:45 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 04:02:31 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sa(t_stack *lst)
{
	if (lst->a_stack[0])
		ft_swap(&lst->a_stack[0], &lst->a_stack[1]);
	if (lst->print == 1)
		write(1, "sa\n", 3);
	return (lst);
}

t_stack	*sb(t_stack *lst)
{
	if (lst->b_stack[0])
		ft_swap(&lst->b_stack[0], &lst->b_stack[1]);
	if (lst->print == 1)
		write(1, "sb\n", 3);
	return (lst);
}

t_stack	*ss(t_stack *lst)
{
	lst->print = 0;
	sa(lst);
	lst->print = 0;
	sb(lst);
	write(1, "ss\n", 3);
	return (lst);
}
