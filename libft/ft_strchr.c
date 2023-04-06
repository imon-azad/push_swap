/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:39:16 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 05:03:18 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	aux;

	i = 0;
	aux = c;
	while (s[i] != '\0')
	{
		if (s[i] == aux)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (aux == '\0')
		return ((char *)&s[i]);
	return (0);
}
/* int	main(void)
{
	char texto[] = "0";
	int letra = '\0';
	char *i;
	i = 0;
	
		i = ft_strchr(((void *)0), letra);
	printf("%s\n", i);

	return (0);
} */
