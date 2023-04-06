/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 04:12:15 by esamad-j          #+#    #+#             */
/*   Updated: 2023/01/30 04:24:21 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
/* void funcion(unsigned int i, char* c)
{
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;
    }
}

int	main(void)
{
	char	original[];

    original[] = "Hola mundo";
    ft_striteri(original, funcion);
    printf("Cadena original: %s\n", original);
    return (0);
}
 */