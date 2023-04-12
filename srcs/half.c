/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:38:40 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 19:19:30 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	upper_half(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if (i == stack->b_minindex)
		temp_moves = stack->b_minindex;
	else if (i < stack->b_minindex)
		temp_moves = stack->b_minindex;
	if ((temp_moves < stack->tot_moves) || (i == 0))
		upper_half_utils_b(stack, i, temp_moves);
}

void	upper_half_a(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if (i == stack->a_minindex)
		temp_moves = stack->a_minindex;
	else if (i < stack->a_minindex)
		temp_moves = stack->a_minindex;
	else if (i > stack->a_minindex)
		temp_moves = i;
	if ((temp_moves < stack->tot_moves) || (i == 0))
		upper_half_a_utils(stack, i, temp_moves);
}

void	lower_half(t_stack *stack, int i)
{
	int temp_moves;

	temp_moves = 0;
	if ((stack->len_a - i) == (stack->len_b - stack->b_minindex))
		temp_moves = stack->len_b - stack->b_minindex;
	else if ((stack->len_a - i) < (stack->len_b - stack->b_minindex))
		temp_moves = stack->len_b - stack->b_minindex;
	else if ((stack->len_a - i) > (stack->len_b - stack->b_minindex))
		temp_moves = stack->len_a - i;
	if ((temp_moves < stack->tot_moves) || (i == 0))
		lower_half_utils_b(stack, i, temp_moves);
}

void	different_half(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if (i < stack->half_a && stack->b_minindex
		>= stack->half_b)
		temp_moves = i + (stack->len_b - stack->b_minindex);
	else if (i >= stack->half_a && stack->b_minindex
		< stack->half_b)
		temp_moves = stack->b_minindex + (stack->len_a - i);
	if ((temp_moves < stack->tot_moves) || (i == 0))
		different_half_utils_b(stack, i, temp_moves);
}