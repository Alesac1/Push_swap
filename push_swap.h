/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:30:57 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/18 14:40:07 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./include/Libft/libft.h"
# include "./include/ft_printf/ft_printf.h"

typedef struct s_moves
{
	int	sa;
	int	sb;
	int	ss;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	pa;
	int	pb;
}				t_moves;

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		max_a;
	int		min_a;
	int		a_minindex;
	int		a_maxindex;
	int		index_a_to_push;
	int		max_b;
	int		min_b;
	int		b_minindex;
	int		b_maxindex;
	int		index_b_to_push;
	int		len_a;
	int		len_b;
	int		move;
	int		tot_moves;
	int		half_a;
	int		half_b;
	t_moves	moves;
}				t_stack;

		/* MOVIMENTI */
void	pa(t_stack *stack, int f);
void	pb(t_stack *stack, int f);
void	sa(t_stack *stack, int f);
void	sb(t_stack *stack, int f);
void	ss(t_stack *stack, int f);
void	ra(t_stack *stack, int f);
void	rb(t_stack *stack, int f);
void	rr(t_stack *stack, int f);
void	rra(t_stack *stack, int f);
void	rrb(t_stack *stack, int f);
void	rrr(t_stack *stack, int f);

		/* UTILS */
void	ft_error(void);
void	a_maxminint(t_stack *stack);
void	b_maxminint(t_stack *stack);
void	check_a_minindex(t_stack *stack);
void	check_a_maxindex(t_stack *stack);
void	check_b_maxindex(t_stack *stack);
void	check_b_minindex(t_stack *stack);
void	find_middle_stack(t_stack *stack);
int		ft_atoi(const char *str, int *stack);
int		initialize_val(t_stack *stack);
void	printstack(t_stack *stack);

		/* SORT */
void	init_moves(t_stack *stack);
void	check_dup(int *a, int len);
void	cicle_b_in_a(t_stack *stack);
void	cicle_a_in_b(t_stack *stack);
int		find_minor_a(t_stack *stack, int i);
int		find_major_a(t_stack *stack, int i);
int		find_minor_b(t_stack *stack, int i);
int		find_major_b(t_stack *stack, int j);
void	stacks_update(t_stack *stack);
int		a_spot_in_b(t_stack *stack, int i);
int		b_spot_in_a(t_stack *stack, int i);
void	upper_half(t_stack *stack, int i);
void	lower_half(t_stack *stack, int i);
void	different_half(t_stack *stack, int i);
void	upper_half_utils_b(t_stack *stack, int i, int temp_moves);
void	lower_half_utils_b(t_stack *stack, int i, int temp_moves);
void	different_half_utils_b(t_stack *stack, int i, int temp_moves);
void	write_stack(int argc, char **argv, int i, t_stack *stack);
void	sortnum(t_stack *stack);
void	sorting(t_stack *stack, int f);
int		checkseq(t_stack	*stack);
void	tresort(t_stack *stack);
t_stack	*input_check(int argc, char **argv);
void	ft_is_valid_num(char **av, int j);
int		ft_free_mem(char **matrix, int f);
void	ft_final_half_check(t_stack *stack);
void	upper_half_a_utils(t_stack *stack, int i, int temp_moves);
void	lower_half_a_utils(t_stack *stack, int i, int temp_moves);
void	different_half_utils_a(t_stack *stack, int i, int temp_moves);
void	upper_half_a(t_stack *stack, int i);
void	lower_half_a(t_stack *stack, int i);
void	different_half_a(t_stack *stack, int i);
void	half_check(t_stack *stack);

#endif