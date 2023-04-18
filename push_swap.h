/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:12:07 by imonazad          #+#    #+#             */
/*   Updated: 2023/04/19 01:08:48 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<limits.h>

typedef struct m_stack
{
	int	i;
	int	j;
	int	k;
	int	*num;
}	t_stack_m;

typedef struct s_stack
{
	int	*a_stack;
	int	*b_stack;
	int	*cpy_stack;
	int	a_len;
	int	b_len;
	int	min_a;
	int	max_a;
	int	min_b;
	int	max_b;
	int	print;
	int	tmp;
	int	limit_num;
	int	cont;
	int	i;
	int	size_block;
	int	to_find;
	int	control;
	int	len_original;
}	t_stack;

/*Entrada de datos*/
int		check_num(char *s);
int		first_lenght(int argc, char **argv);
int		*check(int argc, char **argv, int *len, t_stack_m *mini);
int		check_doble(int *n, int len);
int		check_ordenado(int *n, int len);
int		*create_b(t_stack *lst);
void	exit_code(int *num);
void	init_op(t_stack *lst);

/*Operaciones utils*/
void	ft_swap(int *n1, int *n2);
t_stack	*remove_a(t_stack *lst);
t_stack	*remove_b(t_stack *lst);
t_stack	*add_a(t_stack *lst);
t_stack	*add_b(t_stack *lst);

/*Min-max*/
int		num_max_a(t_stack *lst);
int		num_min_a(t_stack *lst);
int		num_max_b(t_stack *lst);
int		num_min_b(t_stack *lst);

/*Operaciones*/
t_stack	*pa(t_stack *lst);
t_stack	*pb(t_stack *lst);
t_stack	*ra(t_stack *lst);
t_stack	*rb(t_stack *lst);
t_stack	*rr(t_stack *lst);
t_stack	*sa(t_stack *lst);
t_stack	*sb(t_stack *lst);
t_stack	*ss(t_stack *lst);
t_stack	*rra(t_stack *lst);
t_stack	*rrb(t_stack *lst);
t_stack	*rrr(t_stack *lst);

/*Algoritmo*/

void	len_three(t_stack *lst);
void	len_four_to_fifteen(t_stack *lst);

/*algoritmo_order 16+*/
int		up_down(t_stack *lst);
void	order_b(t_stack *lst);
void	move_to_a(t_stack *lst);
void	move_to_b(t_stack *lst);
void	order_b_down(t_stack *lst);

/*Utils de algoritmo*/

int		*create_b(t_stack *lst);
void	copy_stack(t_stack *lst);
void	order_array(t_stack *lst);
void	change_array(t_stack *lst, int i, int j);

/*Libft*/
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
int		check_limits(int argc, char **argv, int len);
#endif
