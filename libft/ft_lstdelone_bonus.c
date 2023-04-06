/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:28:33 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/02 01:43:26 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/* int	main(void)
{
	t_list	*l_aux;
	char	a[];

	a[] = "hola";
	l_aux = ft_lstnew((void *)ft_strdup(a));
	printf("%s\n", (char *)l_aux->content);
	ft_lstdelone(l_aux, free);
	printf("%s\n", (char *)l_aux->content);
	return (0);
}
 */