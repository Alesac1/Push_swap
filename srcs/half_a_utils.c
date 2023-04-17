/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_a_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:07:01 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/17 12:48:37 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	upper_half_a_utils(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->tot_moves = temp_moves;
	stack->index_b_to_push = i;
	stack->index_a_to_push = stack->a_minindex;
	if (i == stack->a_minindex)
		stack->moves.rr = stack->a_minindex;
	else if (i < stack->a_minindex)
	{
		stack->moves.rr = i;
		stack->moves.ra = stack->a_minindex - i;
	}
	else if (i > stack->a_minindex)
	{
		stack->moves.rr = stack->a_minindex;
		stack->moves.rra = i - stack->a_minindex;
	}
}

void	lower_half_a_utils(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->tot_moves = temp_moves;
	stack->index_a_to_push = stack->a_minindex;
	stack->index_b_to_push = i;
	if ((stack->len_b - i) == (stack->len_a - stack->a_minindex))
		stack->moves.rrr = stack->len_a - stack->a_minindex;
	else if ((stack->len_b - i) < (stack->len_a - stack->a_minindex))
	{
		stack->moves.rrr = stack->len_b - i;
		stack->moves.rra = (stack->len_a - stack->a_minindex)
			- (stack->len_b - i);
	}
	else if ((stack->len_b - i) > (stack->len_a - stack->a_minindex))
	{
		stack->moves.rrr = stack->len_a - stack->a_minindex;
		stack->moves.rrb = (stack->len_b - i) 
			- (stack->len_a - stack->a_minindex);
	}
}

void	different_half_utils_a(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->tot_moves = temp_moves;
	stack->index_a_to_push = stack->a_minindex;
	stack->index_b_to_push = i;
	if (i < stack->half_b && stack->a_minindex >= stack->half_a)
	{
		stack->moves.rb = i;
		stack->moves.rra = stack->len_a - stack->a_minindex;
	}
	else if (i > stack->half_b && stack->a_maxindex < stack->half_a)
	{
		stack->moves.rrb = stack->len_b - i;
		stack->moves.ra = i - stack->a_minindex;
	}
}