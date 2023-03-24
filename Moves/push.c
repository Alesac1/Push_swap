/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:49:45 by asacchin          #+#    #+#             */
/*   Updated: 2023/03/24 17:01:09 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pa(t_stack *stack)
{
	int	len;

	len = stack->len_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->len_a++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->len_b)
	{
		stack->b[len - 1] = stack->b[len];
		len++;
	}
	stack->len_b--;
	stack->moves++;
	return (1);
}

int	pb(t_stack *stack)
{
	int	len;

	len = stack->len_b;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->len_b++;
	stack->b[0] = stack->a[0];
	len = 1;
	while (len < stack->len_a)
	{
		stack->a[len - 1] = stack->a[len];
		len++;
	}
	stack->len_a--;
	stack->moves++;
	return (1);
}
