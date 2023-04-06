/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:51:23 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/01 01:14:13 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (lst == NULL)
		return (0);
	aux = lst;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	return (aux);
}

/* int	main(void)
{
	t_list *cabeza = NULL;
	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal"));
	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal2"));
    ft_lstadd_front(&cabeza, ft_lstnew("hola que tal11"));
	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal22"));
	
    t_list *ultimo = ft_lstlast(cabeza);
    printf("%s\n", (char *)ultimo->content);
	return (0);
} */