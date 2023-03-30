/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:54:02 by esamad-j          #+#    #+#             */
/*   Updated: 2023/03/30 15:50:51 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 1;
	int *a;
	
	if (argc < 2)
		return (write(1, "Necesitas 2 argumentos.\n", 24),0);
		
	a = (int *)malloc(sizeof(int) * argc); 
	
	while(k < argc)
	{
		a[j] = atoi(argv[k]);
		k++;
		j++;
	}	
	a[j] = '\0';
	
	j = 0;
	while (j < argc-1)
	{
		printf("%i ",a[j]);
		j++;
	}
	

	return 0;
}