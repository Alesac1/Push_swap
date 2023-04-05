/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:30:57 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/05 16:01:08 by asacchin         ###   ########.fr       */
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
	int		max_a;
	int		min_a;
	int		max_b;
	int		min_b;
	int		len_a;
	int		len_b;
	int		moves;
	int		tot_moves;
	int		minorindexnum_b;
	int		minorindexnum_a;
}				t_stack;

typedef struct s_topush
{
	int	count_moves;
	int	index_a;
	int	index_b;
	int	tmp_moves;
}				t_topush;

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
int		rra(t_stack *stack);
void	sorting(t_stack *stack);
void	tresort(t_stack *stack);
void	countindex(t_stack *stack);
void	a_maxminint(t_stack *stack);
void	b_maxminint(t_stack *stack);
int		checkseq(int *stack, int len_a);
void	move2num(t_stack *stack);

#endif