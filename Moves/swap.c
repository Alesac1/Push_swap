/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:04:54 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/17 18:29:43 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack, int f)
{
	int	tmp;

	tmp = 0;
	if (!stack->a[0] || !stack->a[1])
		return ;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (f == 1)
		ft_printf("sa\n");
	stack->move++;
}

void	sb(t_stack *stack, int f)
{
	int	tmp;

	tmp = 0;
	if (stack->len_b == 0 || stack->len_b == 1)
		return ;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (f == 1)
		ft_printf("ra\n");
	stack->move++;
}

void	ss(t_stack *stack, int f)
{
	int	tmp;

	tmp = 0;
	if (!stack->a[0] || !stack->a[1] || !stack->b[0] || !stack->b[1])
		return ;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (f == 1)
		ft_printf("ss\n");
	stack->move++;
}
