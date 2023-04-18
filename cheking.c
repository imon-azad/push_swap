/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheking.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 04:22:21 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/19 01:08:04 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '+' || s[i] == '-')
			i++;
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

int	*check(int argc, char **argv, int *len, t_stack_m *mini)
{
	char	**s;

	mini->i = 1;
	mini->j = 0;
	mini->k = 0;
	*len = first_lenght(argc, argv);
	if (*len == -1)
		return (0);
	mini->num = (int *)malloc(sizeof(int) * *len);
	if (!mini->num)
		exit(EXIT_FAILURE);
	while (mini->i < argc)
	{
		s = ft_split(argv[mini->i++], ' ');
		while (s[mini->j] != NULL)
		{
			mini->num[mini->k] = ft_atoi(s[mini->j]);
			free(s[mini->j]);
			mini->k++;
			mini->j++;
		}
		free(s);
		mini->j = 0;
	}
	return (mini->num);
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
	while (i < len - 1 && n[i] < n[i + 1])
		i++;
	if (i == len - 1)
		return (0);
	else
		return (-1);
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
		s = ft_split(argv[i++], ' ');
		while (s[j] != NULL)
		{
			if (check_num(s[j]) == 0)
			{
				free(s[j++]);
				len++;
			}
			else
				return (free(s[j]), free(s), -1);
		}
		free(s);
		j = 0;
	}
	return (len);
}
