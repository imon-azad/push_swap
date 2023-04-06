/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:43:35 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:38:03 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
		printf("%c, %d\n", cadena[i], ft_isalpha(cadena[i]));

	return (0);
} */