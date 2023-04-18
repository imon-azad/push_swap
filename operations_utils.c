/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 04:09:49 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/18 19:04:45 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *n1, int *n2)
{
	int	tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

t_stack	*remove_a(t_stack *lst)
{
	int	i;
	int	j;
	int	*saved;

	i = 1;
	j = 0;
	saved = (int *)malloc(lst->a_len * sizeof(int));
	if (!saved)
		exit(EXIT_FAILURE);
	while (i < lst->a_len)
		saved[j++] = lst->a_stack[i++];
	lst->tmp = lst->a_stack[0];
	free(lst->a_stack);
	lst->a_len--;
	lst->a_stack = (int *)malloc(lst->a_len * sizeof(int));
	if (!lst->a_stack)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < lst->a_len)
	{
		lst->a_stack[i] = saved[i];
		i++;
	}
	free(saved);
	return (lst);
}

t_stack	*remove_b(t_stack *lst)
{
	int	i;
	int	j;
	int	*saved;

	i = 1;
	j = 0;
	saved = (int *)malloc(lst->b_len * sizeof(int));
	if (!saved)
		exit(EXIT_FAILURE);
	while (i < lst->b_len)
		saved[j++] = lst->b_stack[i++];
	lst->tmp = lst->b_stack[0];
	free(lst->b_stack);
	lst->b_len--;
	lst->b_stack = (int *)malloc(lst->b_len * sizeof(int));
	if (!lst->a_stack)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < lst->b_len)
	{
		lst->b_stack[i] = saved[i];
		i++;
	}
	free(saved);
	return (lst);
}

t_stack	*add_a(t_stack *lst)
{
	int	i;
	int	j;
	int	*saved;

	i = 0;
	j = 1;
	lst->a_len++;
	saved = (int *)malloc((lst->a_len) * sizeof(int));
	if (!saved)
		exit(EXIT_FAILURE);
	saved[0] = lst->tmp;
	while (i < lst->a_len - 1)
	{
		saved[j] = lst->a_stack[i];
		i++;
		j++;
	}
	free(lst->a_stack);
	lst->a_stack = saved;
	return (lst);
}

t_stack	*add_b(t_stack *lst)
{
	int	i;
	int	j;
	int	*saved;

	i = 0;
	j = 1;
	lst->b_len++;
	saved = (int *)malloc((lst->b_len) * sizeof(int));
	if (!saved)
		exit(EXIT_FAILURE);
	saved[0] = lst->tmp;
	while (i < lst->b_len - 1)
	{
		saved[j] = lst->b_stack[i];
		i++;
		j++;
	}
	free(lst->b_stack);
	lst->b_stack = saved;
	return (lst);
}
