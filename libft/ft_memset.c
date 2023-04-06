/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:43:48 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:58:57 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t num)
{
	size_t			i;
	unsigned char	*s_copy;

	s_copy = s;
	i = 0;
	while (i < num)
	{
		s_copy[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/* int	main(void)
{
	char cadena[] = "HOLAQUETAL";

	ft_memset(cadena, 'a', 3);

	printf("%s", cadena);

	return (0);
} */