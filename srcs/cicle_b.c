/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cicle_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:59:34 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/17 17:40:23 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	cicle_b_in_a(t_stack *stack)
{
	int	i;

	i = 0;
	stack->tot_moves = 0;
	while (i < stack->len_b)
	{
		stack->a_minindex = find_major_a(stack, i);
		if (stack->a_minindex == -1)
			stack->a_minindex = find_minor_a(stack, i);
		b_spot_in_a(stack, i);
		i++;
	}
}

int	find_minor_a(t_stack *stack, int i)
{
	int	j;
	int	minor_index;

	j = 0;
	minor_index = -1;
	while (j < stack->len_a)
	{
		if (stack->a[j] < stack->b[i]
			&& (minor_index == -1
				|| stack->a[j] < stack->a[minor_index]))
				minor_index = j;
		j++;
	}
	return (minor_index);
}

int	find_major_a(t_stack *stack, int i)
{
	int	j;
	int	major_index;

	j = 0;
	major_index = -1;
	while (j < stack->len_a)
	{
		if (stack->a[j] > stack->b[i]
			&& (major_index == -1
				|| stack->a[j] > stack->a[major_index]))
				major_index = j;
		j++;
	}
	return (major_index);
}

int	b_spot_in_a(t_stack *stack, int i)
{
	stacks_update(stack);
	if (i < stack->half_b && stack->a_minindex
		< stack->half_a)
		upper_half_a(stack, i);
	else if (i >= stack->half_b && stack->a_minindex
		>= stack->half_a)
		lower_half_a(stack, i);
	else
		different_half_a(stack, i);
	stacks_update(stack);
	return (0);
}