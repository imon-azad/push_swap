/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:43:40 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:38:23 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
/* int	main(void)
{
	char cadena[] = ";0sR(h&R1/6546456456456";
	int i;

	for (i = 0; cadena[i]; i++)
		printf("%c, %d\n", cadena[i], ft_isdigit(cadena[i]));

	return (0);
} */