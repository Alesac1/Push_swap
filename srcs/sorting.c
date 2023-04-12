/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:44:42 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 17:41:13 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sortnum(t_stack *stack)
{
	if (!checkseq(stack))
	{
		pb(stack, 1);
		pb(stack, 1);
		while (3 < stack->len_a)
		{
			cicle_a_in_b(stack);
			sorting(stack, 0);
		}
		tresort(stack);
		while (stack->len_b > 0)
		{
			cicle_b_in_a(stack);
			sorting(stack, 1);
		}
	}
}

int	checkseq(t_stack	*stack)
{
	int	i;

	i = 0;
	while (i < stack->len_a - 1)
	{
		if (stack->a[i] < stack->a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

void	tresort(t_stack *stack)
{
	if ((stack->a[0] < stack->a[1]) && (stack->a[0] < stack->a[2])
		&& (stack->a[1] > stack->a[2]))
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] > stack->a[2]))
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] < stack->a[2]))
		ra(stack, 1);
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] < stack->a[2])
		&& (stack->a[1] < stack->a[2]))
		sa(stack, 1);
	else if ((stack->a[0] < stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] > stack->a[2]))
		rra(stack, 1);
}

void	sorting(t_stack *stack, int f)
{
	while (stack->moves.pa-- > 0)
		pa(stack, 1);
	while (stack->moves.pb-- > 0)
		pb(stack, 1);
	while (stack->moves.ra-- > 0)
		ra(stack, 1);
	while (stack->moves.rb-- > 0)
		rb(stack, 1);
	while (stack->moves.rr-- > 0)
		rr(stack, 1);
	while (stack->moves.rra-- > 0)
		rra(stack, 1);
	while (stack->moves.rrb-- > 0)
		rrb(stack, 1);
	while (stack->moves.rrr-- > 0)
		rrr(stack, 1);
	if (f == 0)
		pb(stack, 1);
	else if (f == 1)
		pa(stack, 1);
}
