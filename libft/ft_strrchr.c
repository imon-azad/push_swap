/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:45:35 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 05:17:50 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/* int	main(void)
{
	char texto[] = "abbbbbbbbchdufur";
	int letra = 'b';
	char *i;
	i = 0;

	if (ft_strrchr(texto,letra) == NULL)
		puts("No la contiene");
	else
		i = ft_strrchr(texto, letra);
	printf("%s\n", i);

	return (0);
} */