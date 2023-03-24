/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:30:57 by asacchin          #+#    #+#             */
/*   Updated: 2023/03/24 17:42:29 by asacchin         ###   ########.fr       */
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

t_stack	*input_check(int argc, char **argv);
void	check_dup(int *a, int len);
void	ft_error(int *stack);
int		ft_atoi(const char *str, int *stack);
void	printstack(t_stack *stack);
int		sa(t_stack *stack);
int		sb(t_stack *stack);
int		ss(t_stack *stack);
int		pa(t_stack *stack);
int		pb(t_stack *stack);
int		ra(t_stack *stack);
int		rb(t_stack *stack);
int		rrr(t_stack *stack);

#endif