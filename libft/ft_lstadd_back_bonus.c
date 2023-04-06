/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:33:43 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/01 01:24:36 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
}
/* void imprimir_nodos(t_list *cabeza)
{
	t_list	*actual;

    actual = cabeza;
    while (actual != NULL)
    {
        printf("%s ", (char*)actual->content);
        actual = actual->next;
    }
    printf("\n");
}

int	main(void)
{
	t_list *cabeza = NULL;
	ft_lstadd_back(&cabeza, ft_lstnew("hola que tal"));
	ft_lstadd_back(&cabeza, ft_lstnew("hola que tal2"));
    ft_lstadd_back(&cabeza, ft_lstnew("hola que tal11"));
	ft_lstadd_back(&cabeza, ft_lstnew("hola que tal22"));
	
    printf("Los nodos de la lista son: ");
    imprimir_nodos(cabeza);
	return (0);
} */