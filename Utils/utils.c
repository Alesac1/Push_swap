/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:55:16 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/03 16:42:01 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_maxminint(t_stack *stack)
{
	int	i;

	i = 0;
	stack->max_a = stack->a[0];
	stack->min_a = stack->a[0];
	while (i < stack->len_a)
	{
		if (stack->a[i] > stack->max_a)
			stack->max_a = stack->a[i];
		if (stack->a[i] < stack->min_a)
			stack->min_a = stack->a[i];
		i++;
	}
}

void	b_maxminint(t_stack *stack)
{
	int	i;

	i = 0;
	stack->max_b = stack->b[0];
	stack->min_b = stack->b[0];
	while (i < stack->len_b)
	{
		if (stack->b[i] > stack->max_b)
			stack->max_b = stack->b[i];
		if (stack->b[i] < stack->min_b)
			stack->min_b = stack->b[i];
		i++;
	}
}
