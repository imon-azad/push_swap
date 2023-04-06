/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:43:04 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 05:11:18 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	cont;

	cont = 0;
	i = 0;
	while (src[cont] != '\0')
	{
		cont++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (cont);
}
/* int	main(void)
{
	int size;
	size = 9;
	char src[] = "HOlaquetal123";
	char dest[] = "ADSJF123450000000";
	printf("%s\n", dest);
	printf("%lu//", strlcpy(dest, src, size));
	printf("%s//", dest);
	printf("%zu//", ft_strlcpy(dest, src, size));
	printf("%s//", dest);
} */