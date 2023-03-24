/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:03:33 by asacchin          #+#    #+#             */
/*   Updated: 2023/03/24 17:41:23 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rra(t_stack *stack)
{
	int	tmp;
	int	len;

	tmp = stack->a[stack->len_a - 1];
	len = stack->len_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->a[0] = tmp;
	stack->moves++;
	return (1);
}

int	rrb(t_stack *stack)
{
	int	tmp;
	int	len;

	tmp = stack->b[stack->len_b - 1];
	len = stack->len_b;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->b[0] = tmp;
	stack->moves++;
	return (1);
}

int	rrr(t_stack *stack)
{
	int	tmp;
	int	len;

	tmp = stack->a[stack->len_a - 1];
	ft_printf("tmp: %d\n", tmp);
	len = stack->len_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
	stack->a[0] = tmp;
	tmp = stack->b[stack->len_b - 1];
	len = stack->len_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
	stack->b[0] = tmp;
	stack->moves++;
	return (1);
}
