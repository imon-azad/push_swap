/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:54:02 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/06 18:28:23 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"
void print_num(int *n, int len)
{	
	int i;
	i = 0;
	while (i < len)
	{
		printf("%i ",n[i]);
		i++;
	}
	
}

int check_num(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
int *check(int argc, char **argv)
{
	int len = 0;
	int i = 1;
	int j = 0;
	int k = 0;
	
	char **s;
	int *num;
	
	num = (int *)malloc(sizeof(int) * argc);
	while (i < argc)
		{
			s = ft_split(argv[i], ' ');
			while (s[j] != NULL)
			{
				if(check_num(s[j]) == 0)	
				{
					num[k] = atoi(s[j]);
					free(s[j]);
					len++;
					k++;
					j++;
					
				}
				else
				{
					printf("hay letras\n");
					return (0);
				}			
			}
			i++;
			free(s);
			j = 0;
		}
	printf("len: %i \n", len);
	print_num(num, len);
	return num;
}

void	leaksssss(void)
{
	system ("leaks -q a.out");
}

int	main(int argc, char **argv)
{
	//atexit(leaksssss);
	int *a;
	
	if (argc < 2)
		return (write(1, "Necesitas 2 argumentos.\n", 24),0);

	//a = (int *)malloc(sizeof(int) * argc); 
	
	a = check(argc, argv);
	free(a);
	return 0;
}