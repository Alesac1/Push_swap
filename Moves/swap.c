/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:04:54 by asacchin          #+#    #+#             */
/*   Updated: 2023/03/22 18:47:38 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sa(t_stack *stack)
{
	int	tmp;

	tmp = 0;
	if (!stack->a[0] || !stack->a[1])
		return (0);
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	stack->moves++;
	return (1);
}

int	sb(t_stack *stack)
{
	int	tmp;

	tmp = 0;
	if (!stack->b[0] || !stack->b[1])
		return (0);
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	stack->moves++;
	return (1);
}

int	ss(t_stack *stack)
{
	int	tmp;

	tmp = 0;
	if (!stack->a[0] || !stack->a[1] || !stack->b[0] || !stack->b[1])
		retutn (0);
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	stack->moves++;
	return (1);
}
