/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:09:51 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/05 19:05:16 by asacchin         ###   ########.fr       */
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
		stack->minorindexnum_b = find_minor_b(stack, i);
		if (stack->minorindexnum_b == -1)
			stack->minorindexnum_b = find_major_b(stack, i);
		i++;
	}
}

int	find_minor_b(t_stack *stack, int i)
{
	int	i;
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
  	
}

void	ft_count_moves(t_stack *stack)
{
	int	i;
	
}