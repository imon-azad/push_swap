/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 02:34:37 by esamad-j          #+#    #+#             */
/*   Updated: 2023/02/02 03:36:40 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* void	imprimir(void *c)
{
	printf("%s\n", (char *)c);
}
int	main(void)
{
	t_list *a = NULL;

	ft_lstadd_back(&a, ft_lstnew("hola"));
	ft_lstadd_back(&a, ft_lstnew("que"));
	ft_lstadd_back(&a, ft_lstnew("tal"));
	ft_lstiter(a, imprimir);
	return (0);
} */