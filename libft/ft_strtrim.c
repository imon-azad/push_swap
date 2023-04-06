/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:46:11 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 05:20:50 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[j]))
		j--;
	new = ft_substr(s1, i, ((j - i) + 1));
	return (new);
}
/* int	main(void)
{
	char *s1 = "aa3holaquetalaa2";
	char *s2 = "a233hl";

	printf("%s\n", ft_strtrim(s1, s2));
	return (0);
} */