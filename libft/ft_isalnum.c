/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:43:33 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:37:32 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
/* int	main(void)
{
	char cadena[] = ";0sR(h&R1/";
	int i;

	for (i = 0; cadena[i]; i++)
		printf("%c, %d\n", cadena[i], ft_isalnum(cadena[i]));

	return (0);
} */