/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 03:55:56 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/04 04:50:59 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new;
	t_list	*aux2;

	aux = NULL;
	new = NULL;
	if (lst == NULL)
	{
		return (0);
	}
	while (lst != NULL)
	{
		aux2 = f(lst->content);
		aux = ft_lstnew(aux2);
		if (aux == NULL)
		{
			del(aux2);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}

/* void *f(void *ptr)
{
    char *a;

	int i; 
    a = (char *) ptr;
	i = 0;
	while (a[i] != '\0')
	{
		a[i] = ft_toupper(a[i]);
		i++;
	}
	return ((void*)a);
}

void	imprimir_nodos(t_list *cabeza)
{
	t_list	*actual;

	actual = cabeza;
	while (actual != NULL)
	{
		printf("%s ", (char *)actual->content);
		actual = actual->next;
        printf("\n");
	}
	
}
int	main(void)
{
	t_list	*a;
	t_list	*res;
	
	a = ft_lstnew(ft_strdup("hola"));
	ft_lstadd_back(&a, ft_lstnew(ft_strdup("que")));
	ft_lstadd_back(&a, ft_lstnew(ft_strdup("tal?")));

	imprimir_nodos(a);
	res = ft_lstmap(a, f, free);
	printf("------\n");
	imprimir_nodos(res);
	return (0);
} */