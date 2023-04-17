/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:54:02 by esamad-j          #+#    #+#             */
/*   Updated: 2023/04/17 19:22:38 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_num(int *n, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%i ", n[i]);
		i++;
	}
}

int	check_num(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= '0' && s[i] <= '9' )||( s[i] == '-' ) || (s[i] == '+'))
			i++;
		else
			return (1);
	}
	return (0);
}

int	first_lenght(int argc, char **argv)
{
	int		i;
	int		len;
	int		j;
	char	**s;

	i = 1;
	len = 0;
	j = 0;
	while (i < argc)
	{
		s = ft_split(argv[i], ' ');
		while (s[j] != NULL)
		{
			if (check_num(s[j]) == 0)
			{
				free(s[j]);
				len++;
				j++;
			}
			else
			{
				free(s[j]);
				free(s);
				return (-1);
			}
		}
		free(s);
		j = 0;
		i++;
	}
	return (len);
}

int	*check(int argc, char **argv, int *len)
{
	int		i;
	int		j;
	int		k;
	char	**s;
	int		*num;

	i = 1;
	j = 0;
	k = 0;
	*len = first_lenght(argc, argv);
	if (*len == -1)
		return (0);
	num = (int *)malloc(sizeof(int) * *len);
	while (i < argc)
	{
		s = ft_split(argv[i], ' ');
		while (s[j] != NULL)
		{
			num[k] = ft_atoi(s[j]);
			free(s[j]);
			k++;
			j++;
		}
		i++;
		free(s);
		j = 0;
	}
	return (num);
}

int	check_doble(int *n, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (n[i] == n[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_ordenado(int *n, int len)
{
	int	i;

	i = 0;
	while (i < len - 1 && n[i] < n[i + 1])
		i++;
	if (i == len -1)
		return (0);
	else
		return (-1);
}

int	*create_b(t_stack *lst)
{
	int	*tmp;

	tmp = (int *)malloc(lst->a_len * sizeof(int));
	return (tmp);
}

/* operaciones utils */

void ft_swap(int *n1, int *n2)
{
	int tmp;
	
	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

t_stack *remove_a(t_stack *lst)
{
	int i;
	int j;
	int *saved;

	i = 1;
	j = 0;
	saved = (int *)malloc(lst->a_len * sizeof(int));
	while (i < lst->a_len)
	{
		saved[j] = lst->a_stack[i];
		i++;
		j++;
	}
	lst->tmp = lst->a_stack[0];
	free(lst->a_stack);
	lst->a_len--;
	lst->a_stack = (int *)malloc(lst->a_len * sizeof(int));
	i = 0;
	while (i < lst->a_len)
	{
		lst->a_stack[i] = saved[i];
		i++;
	}
	free(saved);
	return (lst);
}

t_stack *remove_b(t_stack *lst)
{
	int i;
	int j;
	int *saved;
	
	i = 1;
	j = 0;
	saved = (int *)malloc(lst->b_len * sizeof(int));
	while (i < lst->b_len)
	{
		saved[j] = lst->b_stack[i];
		i++;
		j++;
	}
	lst->tmp = lst->b_stack[0];
	free(lst->b_stack);
	lst->b_len--;
	lst->b_stack = (int *)malloc(lst->b_len * sizeof(int));
	i = 0;
	while (i < lst->b_len)
	{
		lst->b_stack[i] = saved[i];
		i++;
	}
	free(saved);
	return (lst);
}

t_stack *add_a(t_stack *lst)
{
	int i;
	int j;
	int *saved;

	i = 0;
	j = 1;
	lst->a_len++;
	saved = (int *)malloc((lst->a_len) * sizeof(int));
	saved[0] = lst->tmp;
	while (i < lst->a_len-1)
	{
		saved[j] = lst->a_stack[i];
		i++;
		j++;
	}
	free(lst->a_stack);
	lst->a_stack = saved;
	return (lst);
}

t_stack *add_b(t_stack *lst)
{
	int i;
	int j;
	int *saved;

	i = 0;
	j = 1;
	lst->b_len++;
	saved = (int *)malloc((lst->b_len) * sizeof(int));
	saved[0] = lst->tmp;
	while (i < lst->b_len-1)
	{
		saved[j] = lst->b_stack[i];
		i++;
		j++;
	}
	free(lst->b_stack);
	lst->b_stack = saved;
	return (lst);
}

/*min-max*/

int	num_max_a(t_stack *lst)
{
	int	i;
	int	max;

	i = 0;
	max = lst->a_stack[i];
	while (i < lst->a_len)
	{
		if (lst->a_stack[i] > max)
			max = lst->a_stack[i];
		i++;
	}
	return (max);
}

int	num_min_a(t_stack *lst)
{
	int	i;
	int	min;

	i = 0;
	min = lst->a_stack[i];
	while (i < lst->a_len)
	{
		if (lst->a_stack[i] < min)
			min = lst->a_stack[i];
		i++;
	}
	return (min);
}

int	num_max_b(t_stack *lst)
{
	int	i;
	int	max;

	i = 0;
	max = lst->b_stack[i];
	while (i < lst->b_len)
	{
		if (lst->b_stack[i] > max)
			max = lst->b_stack[i];
		i++;
	}
	return (max);
}

int	num_min_b(t_stack *lst)
{
	int	i;
	int	min;

	i = 0;
	min = lst->b_stack[i];
	while (i < lst->b_len)
	{
		if (lst->b_stack[i] < min)
			min = lst->b_stack[i];
		i++;
	}
	return (min);
}

int second_num_min(t_stack *lst, int num)
{
	int	i;
	int	min;

	i = 0;
	min = lst->a_stack[i];
	while (i < lst->a_len)
	{
		if (lst->a_stack[i] < min && lst->a_stack[i] > num)
			min = lst->a_stack[i];
		i++;
	}
	return (min);
}

/*operaciones*/

t_stack *ra(t_stack *lst)
{
	int i;
	int *saved;
	int tmp;

	i = 0;
	saved = (int *)malloc((lst->a_len) * sizeof(int));
	tmp = lst->a_stack[0];
	while (i < lst->a_len)
	{
		saved[i] = lst->a_stack[i + 1];
		i++;
	}
	free(lst->a_stack);
	saved[i-1] = tmp;
	lst->a_stack = saved;
	if(lst->print == 1)
		write(1, "ra\n", 3);
	lst->print = 1;
	return (lst);
}

t_stack *rb(t_stack *lst)
{
	int i;
	int *saved;
	int tmp;

	i = 0;
	saved = (int *)malloc((lst->b_len) * sizeof(int));
	tmp = lst->b_stack[0];
	while (i < lst->b_len)
	{
		saved[i] = lst->b_stack[i + 1];
		i++;
	}
	free(lst->b_stack);
	saved[i-1] = tmp;
	lst->b_stack = saved;
	if(lst->print == 1)
		write(1, "rb\n", 3);
	lst->print = 1;
	return (lst);
}

t_stack	*rr(t_stack *lst)
{
	lst->print = 0;
	ra(lst);
	lst->print = 0;
	rb(lst);
	write(1, "rr\n", 3);
	return (lst);
}

t_stack *sa(t_stack *lst)
{
	if (lst->a_stack[0])
		ft_swap(&lst->a_stack[0], &lst->a_stack[1]);
	if(lst->print == 1)
		write(1, "sa\n", 3);
	return (lst);
}

t_stack *sb(t_stack *lst)
{
	if (lst->b_stack[0])
		ft_swap(&lst->b_stack[0], &lst->b_stack[1]);
	if(lst->print == 1)
		write(1, "sb\n", 3);
	return (lst);
}

t_stack	*ss(t_stack *lst)
{
	lst->print = 0;
	sa(lst);
	lst->print = 0;
	sb(lst);
	write(1, "ss\n", 3);
	return (lst);
}

t_stack *pa(t_stack *lst)
{
	remove_b(lst);
	add_a(lst);
	write(1, "pa\n", 3);
	return(lst);
}

t_stack *pb(t_stack *lst)
{
	remove_a(lst);
	add_b(lst);
	write(1, "pb\n", 3);
	return(lst);
}

t_stack *rra(t_stack *lst)
{
	int i;
	int j;
	int *saved;

	i = 0;
	j = 1;
	saved = (int *)malloc((lst->a_len) * sizeof(int));
	saved[0] = lst->a_stack[lst->a_len - 1];
	while (i < lst->a_len - 1)
	{
		saved[j] = lst->a_stack[i];
		i++;
		j++;
	}
	free(lst->a_stack);
	lst->a_stack = saved;
	if(lst->print == 1)
		write(1, "rra\n", 4);
	lst->print = 1;
	return (lst);
}

t_stack *rrb(t_stack *lst)
{
	int i;
	int j;
	int *saved;

	i = 0;
	j = 1;
	saved = (int *)malloc((lst->b_len) * sizeof(int));
	saved[0] = lst->b_stack[lst->b_len - 1];
	while (i < lst->b_len - 1)
	{
		saved[j] = lst->b_stack[i];
		i++;
		j++;
	}
	free(lst->b_stack);
	lst->b_stack = saved;
	if(lst->print == 1)
		write(1, "rrb\n", 4);
	lst->print = 1;
	return (lst);
}

t_stack *rrr(t_stack *lst)
{
	lst->print = 0;
	rra(lst);
	lst->print = 0;
	rrb(lst);
	write(1, "rrr\n", 4);
	return (lst);
}

void len_three(t_stack *lst)
{
	if (lst->a_stack[0] < lst->a_stack[1] && lst->a_stack[1] > lst->a_stack[2] && lst->a_stack[0] < lst->a_stack[2])
	{	
		rra(lst);
		sa(lst);
	}
	else if (lst->a_stack[0] > lst->a_stack[1] && lst->a_stack[1] < lst->a_stack[2] && lst->a_stack[0] > lst->a_stack[2])
		ra(lst);
	else if (lst->a_stack[0] > lst->a_stack[1] && lst->a_stack[1] > lst->a_stack[2] && lst->a_stack[0] > lst->a_stack[2])
	{
		sa(lst);
		rra(lst);
	}
	else if (lst->a_stack[0] < lst->a_stack[1] && lst->a_stack[1] > lst->a_stack[2] && lst->a_stack[0] > lst->a_stack[2])
		rra(lst);
	else if (lst->a_stack[0] > lst->a_stack[1] && lst->a_stack[1] < lst->a_stack[2] && lst->a_stack[0] < lst->a_stack[2])
		sa(lst);
}

void len_four_to_nine(t_stack *lst)
{
	int i;
	
	while (lst->a_len > 3)
	{
		i = 0;
		lst->min_a = num_min_a(lst);
		//printf("num_min %i \n", lst->min_a);
		//printf("num_i %i \n", lst->a_stack[i]);¡
		if (lst->a_stack[i] == lst->min_a)
			pb(lst);
		else 
		{
			while (lst->a_stack[i] != lst->min_a && i < lst->a_len)
				i++;
			if (i <= (lst->a_len / 2 ))
				ra(lst);
			else
				rra(lst);
		}
	}
	
	len_three(lst);
	while (lst->b_len != 0)
			pa(lst);	
}

void copy_stack(t_stack *lst)
{
	int i;

	i = 0;
	lst->cpy_stack = (int *)malloc(sizeof(int) * lst->a_len);

	while (i < lst->a_len)
	{
		lst->cpy_stack[i] =  lst->a_stack[i];
		i++;
	}
}

void transform_array(t_stack *lst) 
{
	
    int i;
	int j;
	int min;
	
    j = 0;
    i = 0;
    while (i < lst->a_len)
	{
    	min = i;
        j = i + 1;
        while (j < lst->a_len) 
		{
            if (lst->cpy_stack[j] < lst->cpy_stack[min])
                min = j;
            j++;
        }
		ft_swap(&lst->cpy_stack[i], &lst->cpy_stack[min]);
        i++;
    }

    i = 0;
    while (i < lst->a_len) {
        j = 0;
        while (j < lst->a_len) {
            if (lst->cpy_stack[j] == lst->a_stack[i])
			{
                lst->a_stack[i] = j;
                break;
            }
            j++;
        }
        i++;
    }
}


void	calc(t_stack *lst)
{
	if (lst->b_stack[0] == lst->lsp - 1)
	{
		pa(lst);
		lst->control = 1;
	}
	if (lst->b_stack[0] == lst->lsp)
	{
		pa(lst);
		lst->lsp--;
		if (lst->control == 1)
		{
			lst->lsp--;
			lst->control = 0;
			sa(lst);
		}
		if (lst->control == 2)
		{
			lst->lsp = lst->lsp - 2;
			lst->control = 0;
			sa(lst);
			rra(lst);
		}
	}
	else 
		rb(lst);
	
}

int	check_mov(t_stack *lst)
{
	int	i;

	i = 0;
	while (i <= lst->b_len - 1)
	{
		if (lst->b_stack[i] == lst->lsp)
			break ;
		i++;
	}
	if ((lst->b_len / 2) - i >= 0)
		return (0);
	else
		return (-1);
}

void	ordernums_sb_rotate(t_stack *lst)
{
	if(lst->b_stack[0] == lst->lsp - 2 && lst->control == 1)
	{	
		pa(lst);
		ra(lst);
		lst->control = 2;
	}
	if (lst->b_stack[0] == lst->lsp - 1) 
	{
		pa(lst);
		lst->control = 1;
	}
	if (lst->b_stack[0] == lst->lsp)
	{
		pa(lst);
		lst->lsp--;
		 if (lst->control == 1)
		{
			lst->lsp--;
			lst->control = 0;
			sa(lst);
		} 
	}
	else 
		rrb(lst);
	
}

void ordernums_sb(t_stack *lst)
{
	while (lst->a_len < lst->len_original)
	{
		if (lst->b_stack[0] == lst->lsp && lst->control == 0)
		{
			pa(lst);
			lst->lsp--;
		}
		if (lst->b_stack[0] == lst->lsp -2 && lst->control == 1)
		{
			pa(lst);
			ra(lst);
			lst->control = 2;
		}
		if (check_mov(lst) == -1)
			ordernums_sb_rotate(lst);
		else
			calc(lst);
	}
	
}


void ordernums(t_stack *lst)
{
	lst->arguments = (lst->len_original / lst->cont) * (lst->percentage);
	
	printf("arguments: %i \n",lst->arguments );
	printf("percentage: %i \n",lst->percentage );
	printf("argc: %i \n",lst->a_len );
	printf("cont: %i \n",lst->cont );
	printf("sib: %i \n",lst->b_len );
	printf("sia: %i \n",lst->a_len );
	printf("lsp: %i \n",lst->lsp );
	printf("control: %i \n",lst->control );
	printf("size_block: %i \n",lst->size_block );
	
	if (lst->percentage == lst->cont)
		lst->arguments = lst->len_original - 3;
	
	while (lst->b_len < lst->arguments && lst->percentage <= lst->cont)
	{
		if (lst->a_stack[0] < lst->arguments)
		{
			pb(lst);
			if(lst->b_stack[0] > lst->arguments - lst->size_block && lst->b_len > 1)
				rb(lst);
		}
		else	
			ra(lst);
	}
	lst->percentage++;
	if (lst->a_len == 3)
	{
		len_three(lst);
		lst->lsp = lst->lsp - 3;
	}
/* 	print_num(lst->a_stack, lst->a_len);
	printf("\n----\n");
	print_num(lst->b_stack, lst->b_len);
	printf("\n-------------\n");
	printf("lsp: %i \n",lst->lsp );
	printf("percentage: %i \n",lst->percentage );
	printf("cont: %i \n",lst->cont );
	printf("arguments: %i \n",lst->arguments );  */
	if(lst->percentage <= lst->cont)
		ordernums(lst);
	while (lst->percentage-- > 0)
		ordernums_sb(lst);
		
}


void init_op(t_stack *lst)
{
	if (lst->a_len == 2)
		ra(lst);
	if (lst->a_len == 3)
		len_three(lst);
	if (lst->a_len > 3 && lst->a_len < 10)
		len_four_to_nine(lst);
	if (lst->a_len >= 10 && lst->a_len < 100)
	{
	lst->cont = 4;
	lst->percentage = 1;
	lst->len_original = lst->a_len;
	lst->lsp = lst->a_len - 1;
	lst->size_block = (lst->len_original / lst->cont) / 2;
	lst->control = 0;
	ordernums(lst);
	}
	if (lst->a_len >= 100)
	{
	lst->cont = 8;
	lst->percentage = 1;
	lst->len_original = lst->a_len;
	lst->lsp = lst->a_len - 1;
	lst->size_block = (lst->a_len / lst->cont) / 2;
	lst->control = 0;
	ordernums(lst);
	}

}

 

void	init_var(t_stack *lst, int *num, int len)
{
	lst->a_len = len;
	lst->b_len = 0;
	lst->a_stack = num;
	lst->b_stack = create_b(lst);
	lst->min_a = num_min_a(lst);
	lst->max_a = num_max_a(lst);
	lst->min_b = num_min_b(lst);
	lst->max_b = num_max_b(lst);
	lst->print = 1;

}

void	leaksssss(void)
{
	system("leaks -q push_swap");
}

int	main(int argc, char **argv)
{
	//atexit(leaksssss);
	t_stack lst;
	int len;

	len = 0;
	

	int *a;
	
	a = check(argc, argv, &len);

	if (len == -1)
	{
		write(1, "Error\n", 6);
		free(a);
		return (0);
	}

	if (check_doble(a, len) == -1)
	{
		write(1, "Error\n", 6);
		free(a);
		return (0);
	}
	
	//print_num(a, len);
	//printf("\nlen: %i \n", len); 
	
	if (check_ordenado(a, len) == 0)
	{
		free(a);
		return (0);
	}

	init_var(&lst, a, len);
	copy_stack(&lst);
	transform_array(&lst);
	init_op(&lst);
	
	
	/* printf("---lista ordenada---\n");
	print_num(lst.a_stack, len); */
	//printf("\n------\n");
	
	
	printf("---lista posiciones s_a---\n");
	print_num(lst.a_stack, len);
	
	/* printf("\n---lista solucion esperada cpy_s---\n");
	print_num(lst.cpy_stack, len); */
	
	free(lst.a_stack);
	free(lst.b_stack);
	free(lst.cpy_stack);
	
	/* printf("max: %i \n", lst.max_a);
	printf("min: %i \n", lst.min_a);
	*/
	//printf("\nlen: %i \n", len); 
	return (0);
}