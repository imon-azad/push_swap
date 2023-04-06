/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:27:12 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 05:13:50 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	i = 0;
	while ((s1_cpy[i] != '\0' && i < n) || (s2_cpy[i] != '\0' && i < n))
	{
		if (s1_cpy[i] == s2_cpy[i])
			i++;
		else if (s1_cpy[i] < s2_cpy[i])
			return (-1);
		else
			return (1);
	}
	return (0);
}
/* int	main(void)
{
	char s1[] = "\200";
	char s2[] = "\0";
	printf("%i\n", ft_strncmp(s1, s2, 2));
	printf("%i", strncmp(s1, s2, 2));
	return (0);
} */