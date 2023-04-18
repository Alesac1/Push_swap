/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:11:58 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/18 15:08:31 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_moves(t_stack *stack)
{
	stack->moves.pa = 0;
	stack->moves.pb = 0;
	stack->moves.ra = 0;
	stack->moves.rb = 0;
	stack->moves.rr = 0;
	stack->moves.rra = 0;
	stack->moves.rrb = 0;
	stack->moves.rrr = 0;
	stack->moves.sa = 0;
	stack->moves.sb = 0;
}

int	initialize_val(t_stack *stack)
{
	stack->max_a = 0;
	stack->min_a = 0;
	stack->max_b = 0;
	stack->min_b = 0;
	stack->len_b = 0;
	return (0);
}
