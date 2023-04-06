/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:15:26 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 05:04:45 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*src_with_memory;

	i = 0;
	j = 0;
	i = ft_strlen(src);
	src_with_memory = (char *)malloc(i * sizeof(char) + 1);
	if (src_with_memory == NULL)
		return (0);
	while (src[j] != '\0')
	{
		src_with_memory[j] = src[j];
		j++;
	}
	src_with_memory[j] = '\0';
	return (src_with_memory);
}
/* int main (){
	printf("%s\n", ft_strdup("hola"));
	return (0);
} */
