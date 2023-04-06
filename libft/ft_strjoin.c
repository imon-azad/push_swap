/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:36:33 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 05:08:54 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*new_str;
	size_t	new_len;

	i = 0;
	j = 0;
	new_len = (ft_strlen(str1) + ft_strlen(str2));
	new_str = malloc(sizeof(char) * (new_len + 1));
	if (!new_str)
		return (0);
	while (str1[i] != '\0')
	{
		new_str[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		new_str[i] = str2[j];
		i++;
		j++;
	}
	new_str[i] = 0;
	return (new_str);
}
/*  int	main(void)
{
	char *s1 = "hola";
	char *s2 = " que tal";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}  */