/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:43:38 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:38:12 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
/* int	main(void)
{
	char cadena[] = ";0ñsáR(h&~?RÛ1/";
	int i;

	for (i = 0; cadena[i]; i++)
		printf("%c, %d\n", cadena[i], ft_isascii(cadena[i]));

	return (0);
} */