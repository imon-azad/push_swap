/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:25:31 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:54:54 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/* int	main(void)
{
	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2 = "\xff\xaa\xde\x02";
	size_t size = 8;
	int i2 = ft_memcmp(s1, s2, size);
	printf("%i\n", i2);
	return (0);
} */