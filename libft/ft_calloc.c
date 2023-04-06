/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 02:25:24 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/08 15:39:53 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;
	int		i;

	if ((count >= SIZE_MAX && size > 1) || (size >= SIZE_MAX && count > 1))
		return (0);
	i = 0;
	new = (char *)malloc(count * size);
	if (new == NULL)
		return (0);
	while (i < (int)(count * size))
	{
		new[i] = 0;
		i++;
	}
	return (new);
}

/* int main (){
    char *p;
    int n = 5;
	p = ft_calloc(n,5);
	printf("%s\n", p);
	return (0);
} */