/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 03:42:02 by esamad-j          #+#    #+#             */
/*   Updated: 2023/01/31 13:50:58 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		cont;

	aux = lst;
	cont = 0;
	while (aux != NULL)
	{
		cont++;
		aux = aux->next;
	}
	return (cont);
}
/* int	main(void)
{
	t_list *cabeza = NULL;
	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal"));
	ft_lstadd_front(&cabeza, ft_lstnew("hola que tal2"));
	int num_nodos = ft_lstsize(cabeza);
	printf("La lista tiene %d nodos.\n", num_nodos);
	return (0);
} */