/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:54:02 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/11 14:56:59 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_num(int *n, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%i ", n[i]);
		i++;
	}
}

int	check_num(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

int	first_lenght(int argc, char **argv)
{
	int		i;
	int		len;
	int		j;
	char	**s;

	i = 1;
	len = 0;
	j = 0;
	while (i < argc)
	{
		s = ft_split(argv[i], ' ');
		while (s[j] != NULL)
		{
			if (check_num(s[j]) == 0)
			{
				free(s[j]);
				len++;
				j++;
			}
			else
			{
				free(s[j]);
				free(s);
				return (-1);
			}
		}
		free(s);
		j = 0;
		i++;
	}
	return (len);
}

int	*check(int argc, char **argv, int *len)
{
	int		i;
	int		j;
	int		k;
	char	**s;
	int		*num;

	i = 1;
	j = 0;
	k = 0;
	*len = first_lenght(argc, argv);
	if (*len == -1)
		return (0);
	num = (int *)malloc(sizeof(int) * *len);
	while (i < argc)
	{
		s = ft_split(argv[i], ' ');
		while (s[j] != NULL)
		{
			num[k] = atoi(s[j]);
			free(s[j]);
			k++;
			j++;
		}
		i++;
		free(s);
		j = 0;
	}
	return (num);
}

int	check_doble(int *n, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (n[i] == n[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_ordenado(int *n, int len)
{
	int	i;

	i = 0;
	while (i < len && n[i] < n[i + 1])
		i++;
	if (i == len)
		return (0);
	return (-1);
}

int	*create_b(t_stack *lst)
{
	int	*tmp;

	tmp = (int *)malloc(lst->a_len * sizeof(int));
	return (tmp);
}

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

}

void	leaksssss(void)
{
	system("leaks -q a.out");
}

int	main(int argc, char **argv)
{
	t_stack lst;
	int len;

	len = 0;
	//atexit(leaksssss);

	int *a;

	/* if (argc < 2)
		return (write(1, "Necesitas 2 argumentos.\n", 24),0); */

	a = check(argc, argv, &len);

	if (len == -1)
	{
		write(1, "Error\n", 6);
		free(a);
		return (0);
	}

	if (check_doble(a, len) == -1)
	{
		write(1, "Error\n", 6);
		free(a);
		return (0);
	}

	if (check_ordenado(a, 3) == 0)
	{
		free(a);
		return (0);
	}

	init_var(&lst, a, len);
	free(lst.a_stack);
	free(lst.b_stack);
	
	printf("max: %i \n", lst.max_a);
	printf("min: %i \n", lst.min_a);

	print_num(lst.a_stack, len);
	printf("\nlen: %i \n", len);

	return (0);
}