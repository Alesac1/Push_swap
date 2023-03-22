/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:30:57 by asacchin          #+#    #+#             */
/*   Updated: 2023/03/22 14:54:42 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./include/Libft/libft.h"
# include "./include/ft_printf/ft_printf.h"

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		len_a;
	int		len_b;
	int		moves;
}				t_stack;

void	check_dup(int *a, int len);
void	ft_error(int *stack);
int		ft_atoi(const char *str, int *stack);
t_stack	*input_check(int argc, char **argv);

#endif