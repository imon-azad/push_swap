/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:43:27 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:36:50 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t num)
{
	size_t			i;
	unsigned char	*aux;

	aux = s;
	i = 0;
	while (i < num)
	{
		aux[i] = 0;
		i++;
	}
	return (s);
}
/* int	main(void)
{
	char cadena[] = "HOLAQUETAL";

	ft_bzero(cadena, 0);
	printf("%aux", cadena);
	return (0);
} */