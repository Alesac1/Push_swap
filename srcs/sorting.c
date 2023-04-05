/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:44:42 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/05 14:21:56 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sorting(t_stack *stack)
{
	if (!checkseq(stack->a, stack->len_a))
	{
		if (stack->len_a == 2)
			sa(stack);
		else if (stack->len_a == 3)
			tresort(stack);
		// // else
		// // 	sort(stack, stack->len_a, 0);
	}
}

int	checkseq(int *stack, int len_a)
{
	int	i;

	i = 1;
	while (i < len_a)
	{
		if (stack[i] < stack[i - 1])
			return (0);
		i++;
	}
	return (1);
}

void	tresort(t_stack *stack)
{
	if ((stack->a[0] < stack->a[1]) && (stack->a[0] < stack->a[2])
		&& (stack->a[1] > stack->a[2]))
	{
		sa(stack);
		ra(stack);
	}
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] > stack->a[2]))
	{
		sa(stack);
		rra(stack);
	}
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] < stack->a[2]))
		ra(stack);
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] < stack->a[2])
		&& (stack->a[1] < stack->a[2]))
		sa(stack);
	else if ((stack->a[0] < stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] > stack->a[2]))
		rra(stack);
}

void	move2num(t_stack *stack)
{
	pb(stack);
	pb(stack);
}

// void	sort(t_stack *stack)
// {

// }