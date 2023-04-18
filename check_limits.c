/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_limits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 22:54:20 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/19 01:07:23 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int	ft_atoi_limits(const char *str)
{
	int				i;
	int				sign;
	long long int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}

long long int	*check_limits_op(int argc, char **argv, int len)
{
	int				i;
	int				j;
	int				k;
	char			**s;
	long long int	*num;

	i = 1;
	j = 0;
	k = 0;
	num = (long long int *)malloc(sizeof(long long int) * len);
	while (i < argc)
	{
		s = ft_split(argv[i], ' ');
		while (s[j] != NULL)
		{
			num[k] = ft_atoi_limits(s[j]);
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

int	check_limits(int argc, char **argv, int len)
{
	long long int	*num;
	int				i;

	i = 0;
	num = check_limits_op(argc, argv, len);
	while (i < len)
	{
		if (num[i] > INT_MAX || num[i] < INT_MIN)
		{
			free(num);
			return (-1);
		}
		i++;
	}
	free(num);
	return (0);
}
