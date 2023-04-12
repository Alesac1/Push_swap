/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:55:52 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 16:02:25 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack, int f)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = stack->a[0];
	while (++i < stack->len_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
	}
	stack->a[i] = tmp;
	if (f == 1)
		ft_printf("ra\n");
	stack->move++;
}

void	rb(t_stack *stack, int f)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = stack->a[0];
	while (++i < stack->len_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
	}
	stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rb\n");
	stack->move++;
}

void	rr(t_stack *stack, int f)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = stack->a[0];
	while (++i < stack->len_a - 1)
		stack->a[i] = stack->a[i + 1];
	stack->a[i] = tmp;
	i = -1;
	tmp = stack->b[0];
	while (++i < stack->len_b - 1)
		stack->b[i] = stack->b[i + 1];
	stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rr\n");
	stack->move++;
}
