/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 01:44:43 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/02 02:33:43 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst != NULL)
	{
		aux = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = aux;
	}
	lst = NULL;
}

/* void	imprimir_nodos(t_list *cabeza)
{
	t_list	*actual;

	actual = cabeza;
	while (actual != NULL)
	{
		printf("%s ", (char *)actual->content);
		actual = actual->next;
	}
	printf("\n");
}
int	main(void)
{
	t_list *cabeza = NULL;
	t_list **lst = &cabeza;

	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal"));
	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal2"));
	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal11"));
	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal22"));

	imprimir_nodos(cabeza);
	ft_lstclear(lst, free);
	imprimir_nodos(cabeza);
	return (0);
} */