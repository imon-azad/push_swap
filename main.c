/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:54:02 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/19 01:08:36 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	leaksssss(void)
{
	system("leaks -q push_swap");
}
void	print_num(int *n, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%i ", n[i]);
		i++;
	}
} */
//atexit(leaksssss);
void	init_op(t_stack *lst)
{
	if (lst->a_len == 2)
		ra(lst);
	if (lst->a_len == 3)
		len_three(lst);
	if (lst->a_len > 3 && lst->a_len <= 15)
		len_four_to_fifteen(lst);
	if (lst->a_len > 15 && lst->a_len <= 150)
	{
		lst->cont = 4;
		move_to_b(lst);
	}
	if (lst->a_len > 150)
	{
		lst->cont = 12;
		move_to_b(lst);
	}
}

void	init_var(t_stack *lst, int *num, int len)
{
	lst->a_len = len;
	lst->b_len = 0;
	lst->a_stack = num;
	lst->b_stack = create_b(lst);
	lst->min_a = num_min_a(lst);
	lst->max_a = num_max_a(lst);
	lst->min_b = num_min_b(lst);
	lst->max_b = num_max_b(lst);
	lst->print = 1;
	lst->control = 0;
	lst->i = 1;
	lst->len_original = lst->a_len;
	lst->to_find = lst->len_original - 1;
	lst->size_block = (lst->len_original / lst->cont) / 2;
}

int	main(int argc, char **argv)
{
	t_stack		lst;
	t_stack_m	mini;
	int			len;
	int			*num;

	len = 0;
	num = check(argc, argv, &len, &mini);
	if (len == -1)
		return (exit_code(num), -1);
	if (check_limits(argc, argv, len) == -1)
		return (exit_code(num), -1);
	if (check_doble(num, len) == -1)
		return (exit_code(num), -1);
	if (check_ordenado(num, len) == 0)
		return (free(num), 0);
	init_var(&lst, num, len);
	copy_stack(&lst);
	order_array(&lst);
	init_op(&lst);
	free(lst.a_stack);
	free(lst.b_stack);
	free(lst.cpy_stack);
	return (0);
}

void	exit_code(int *num)
{
	write(2, "Error\n", 6);
	free(num);
}
