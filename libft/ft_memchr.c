/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:24:18 by esamad-j          #+#    #+#             */
/*   Updated: 2023/01/16 03:25:14 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (0);
}
/* int	main(void)
{
	char buffer[] = "Hello World!";
	char ch = 0;
	void *pch;

	pch = ft_memchr(buffer, ch, 5);

	if (pch != NULL)
	{
		printf("First occurrence of '%c' in the buffer is at address: %p\n", ch,
				pch);
	}
	else
	{
		printf("Character not found in the buffer\n");
	}
} */