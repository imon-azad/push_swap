/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 23:20:45 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:57:14 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/* int	main(void)
{
	char dst1[] = "orem ipsum dolor sit a";
	char dst2[] = "consectetur";
	int size = 5;

	ft_memmove(dst1, dst2, size);

	printf("%s", dst1);
	return (0);
} */