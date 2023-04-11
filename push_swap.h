/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:12:07 by imonazad          #+#    #+#             */
/*   Updated: 2023/04/11 02:50:34 by esamad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
    int		*a_stack;
    int		*b_stack;
    int     a_len;
    int     b_len;
    int     min_a;
    int     max_a;
    int     min_b;
    int     max_b;
    
    
} t_stack;

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"


#endif
