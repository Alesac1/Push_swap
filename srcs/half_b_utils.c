/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_b_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:48:35 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 16:28:53 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	upper_half_utils_b(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->tot_moves = temp_moves;
	stack->index_a_to_push = i;
	stack->index_b_to_push = stack->b_minindex;
	if (i == stack->b_minindex)
		stack->moves.rr = stack->b_minindex;
	else if (i < stack->b_minindex)
	{
		stack->moves.rr = i;
		stack->moves.rb = stack->b_minindex - i;
	}
	else if (i > stack->b_minindex)
	{
		stack->moves.rr = stack->b_minindex;
		stack->moves.ra = i - stack->b_minindex;
	}
}

void	lower_half_utils_b(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->tot_moves = temp_moves;
	stack->index_b_to_push = stack->b_minindex;
	stack->index_a_to_push = i;
	if ((stack->len_a - i) == (stack->len_b - stack->b_minindex))
		stack->moves.rrr = stack->len_b - stack->b_minindex;
	else if ((stack->len_a - i) < (stack->len_b - stack->b_minindex))
	{
		stack->moves.rrr = stack->len_a - i;
		stack->moves.rrb = (stack->len_b - stack->b_minindex)
			- (stack->len_a - i);
	}
	else if ((stack->len_a - i) > (stack->len_b - stack->b_minindex))
	{
		stack->moves.rrr = stack->len_b - stack->b_minindex;
		stack->moves.rra = (stack->len_a - i) 
			- (stack->len_b - stack->b_minindex);
	}
}

void	different_half_utils_b(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->tot_moves = temp_moves;
	stack->index_b_to_push = stack->b_minindex;
	stack->index_a_to_push = i;
	if (i < stack->half_a && stack->b_minindex >= stack->half_b)
	{
		stack->moves.rr = i;
		stack->moves.rrb = stack->len_b - stack->b_minindex;
	}
	else if (i >= stack->half_a && stack->b_minindex < stack->half_b)
	{
		stack->moves.rb = stack->b_minindex;
		stack->moves.rra = stack->len_a - i;
	}
}