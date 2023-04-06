/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 03:11:11 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 05:12:43 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*new_s;

	i = 0;
	len = ft_strlen(s);
	new_s = malloc(len + 1);
	if (new_s == NULL)
		return (0);
	while (i < len)
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/* char	funcion(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int	main(void)
{
	char	*original;
	char	*resultado;

	original = "Hola mundo";
	resultado = ft_strmapi(original, funcion);
	printf("Cadena original: %s\n", original);
	printf("Cadena modificada: %s\n", resultado);
	free(resultado);
	return (0);
} */