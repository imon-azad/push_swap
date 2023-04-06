/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 02:39:01 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:49:22 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_count(int n)
{
	long int	aux;
	int			i;

	i = 1;
	aux = n;
	if (aux < 0)
	{
		aux = aux * -1;
		i++;
	}
	while (aux >= 10)
	{
		aux = (aux / 10);
		i++;
	}
	return (i);
}

static int	denominator(int n)
{
	int	den;
	int	len;

	len = size_count(n);
	den = 1;
	if (n < 0)
		len--;
	while (len > 1)
	{
		den = den * 10;
		len--;
	}
	return (den);
}

static char	*operations(long int nlong, int den, int len, char *num)
{
	int	i;

	i = 0;
	if (nlong < 0)
	{
		num[i] = '-';
		nlong = nlong * -1;
		i++;
	}
	while (i < len)
	{
		num[i] = ((nlong / den) + '0');
		nlong = nlong % den;
		den = den / 10;
		i++;
	}
	num[i] = '\0';
	return (num);
}

char	*ft_itoa(int n)
{
	char		*num;
	int			len;
	int			den;
	long int	nlong;

	nlong = n;
	len = size_count(n);
	den = denominator(n);
	num = malloc(len + 1);
	if (num == NULL)
		return (0);
	num = operations(nlong, den, len, num);
	return (num);
}

/* int	main(void)
{
	int a = -2147483648;
	char *b = ft_itoa(a);
	printf("%s\n", b);
	return (0);
} */