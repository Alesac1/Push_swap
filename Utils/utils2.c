/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:03:24 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 17:45:47 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_b_minindex(t_stack *stack)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	index = 0;
	min = stack->b[i];
	while (i < stack->len_b)
	{
		if (stack->b[i] < min)
		{
			min = stack->b[i];
			index = i;
		}
		i++;
	}
	stack->a_minindex = index;
}

void	check_b_maxindex(t_stack *stack)
{
	int	i;
	int	max;
	int	index;

	i = 0;
	index = 0;
	max = stack->b[i];
	while (i < stack->len_b)
	{
		if (stack->b[i] > max)
		{
			max = stack->b[i];
			index = i;
		}
		i++;
	}
	stack->b_maxindex = index;
}

void	ft_final_half_check(t_stack *stack)
{
	if (stack->a_minindex < stack->half_a)
	{
		while (stack->a_minindex > 0)
		{
			ra(stack, 1);
			stacks_update(stack);
		}
	}
	else
	{
		while (stack->a_minindex > 0)
		{
			rra(stack, 1);
			stacks_update(stack);
		}
	}
}
