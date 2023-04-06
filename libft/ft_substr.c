/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:42:58 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/15 18:23:14 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	char	*new;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len + start > len_s)
		len = len_s - start;
	if (start > len_s)
		return (ft_strdup(""));
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (0);
	i = 0;
	while (len > 0)
	{
			new[i] = s[start];
			i++;
			start++;
			len --;
	}
	new[i] = '\0';
	return (new);
}
/* int main()
{
	char	*str;
	int		m;
	int		n;

	str = "Hello Please Trim me !";
    m = 0;
    n = 23;
 
    char* dest = ft_substr(str, m, n);
 
    printf("%s\n", dest);
 
    return (0);
}
 */