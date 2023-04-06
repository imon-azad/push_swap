/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:43:42 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:38:29 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}
/* int	main(void)
{
	int c;
	for (c = 1; c <= 127; ++c)
		if (ft_isprint(c) != 0)
			printf("%c ", c);
	return (0);
} */