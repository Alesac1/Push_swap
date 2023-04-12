/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cicle_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:09:51 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 19:02:39 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	cicle_a_in_b(t_stack *stack)
{
	int	i;

	i = 0;
	stack->tot_moves = 0;
	while (i < stack->len_a)
	{
		// printstack(stack);
		stack->b_minindex = find_minor_b(stack, i);
		if (stack->b_minindex == -1)
			stack->b_minindex = find_major_b(stack, i);
		a_spot_in_b(stack, i);
		i++;
	}
}

int	find_minor_b(t_stack *stack, int i)
{
	int	j;
	int	minor_index;

	j = 0;
	minor_index = -1;
	while (j < stack->len_b)
	{
		if (stack->b[j] < stack->a[i]
			&& (minor_index == -1
				|| stack->b[j] > stack->b[minor_index]))
			minor_index = j;
		j++;
	}
	return (minor_index);
}

int	find_major_b(t_stack *stack, int i)
{
	int	j;
	int	major_index;

	j = 0;
	major_index = -1;
	while (j < stack->len_b)
	{
		if (stack->b[j] > stack->a[i]
			&& (major_index == -1
				|| stack->b[j] > stack->b[major_index]))
			major_index = j;
		j++;
	}
	return (major_index);
}

void	stacks_update(t_stack *stack)
{
	a_maxminint(stack);
	b_maxminint(stack);
	check_a_maxindex(stack);
	check_a_minindex(stack);
	check_b_maxindex(stack);
	check_b_minindex(stack);
	find_middle_stack(stack);
}

int	a_spot_in_b(t_stack *stack, int i)
{
	if (i < stack->half_a && stack->b_minindex < stack->half_b)
		upper_half(stack, i);
	else if (i >= stack->half_a && stack->b_minindex >= stack->half_b)
		lower_half(stack, i);
	else
		different_half(stack, i);
	stacks_update(stack);
	return (0);
}
