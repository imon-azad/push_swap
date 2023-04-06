/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:39:40 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/08 16:05:57 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	if (dst == NULL && (int *)size == NULL)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	if (size <= len_dst)
		return (size + len_src);
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
/* int	main(void)
{
	int i;
	char dest[10] = "hola";
	char src[] = "1234567890";
	i = ft_strlcat(dest, src, 4);
	printf("%i\n", i);
	
	printf("%s\n", dest);
	printf("%s\n", src);
	return (0);
} */