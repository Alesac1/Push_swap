/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:55:16 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 16:10:38 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_middle_stack(t_stack *stack)
{
	int	half_index_a;
	int	half_index_b;

	half_index_a = 0;
	half_index_b = 0;
	if ((stack->len_a) % 2 == 0)
		half_index_a = ((stack->len_a) / 2);
	else if ((stack->len_a) % 2 != 0)
		half_index_a = (((stack->len_a) / 2) + 1);
	else if ((stack->len_b) % 2 == 0)
		half_index_b = ((stack->len_b) / 2);
	else if ((stack->len_b) % 2 != 0)
		half_index_b = (((stack->len_b) / 2) + 1);
	half_index_b = stack->half_b;
	half_index_a = stack->half_a;
}

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

void	check_a_minindex(t_stack *stack)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	index = 0;
	min = stack->a[i];
	while (i < stack->len_a)
	{
		if (stack->a[i] < min)
		{
			min = stack->a[i];
			index = i;
		}
		i++;
	}
	stack->a_minindex = index;
}

void	check_a_maxindex(t_stack *stack)
{
	int	i;
	int	max;
	int	index;

	i = 0;
	index = 0;
	max = stack->a[i];
	while (i < stack->len_a)
	{
		if (stack->a[i] > max)
		{
			max = stack->a[i];
			index = i;
		}
		i++;
	}
	stack->a_maxindex = index;
}
