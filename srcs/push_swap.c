/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:43:19 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/03 16:42:07 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc < 2)
		return (0);
	stack = input_check(argc, argv);
	sorting(stack);
	a_maxminint(stack);
	b_maxminint(stack);
	ft_printf("max %d\n", stack->max_a);
	ft_printf("min %d\n", stack->min_a);
	ft_printf("max %d\n", stack->max_b);
	ft_printf("min %d\n", stack->min_b);
	printstack(stack);
}

void	printstack(t_stack *stack)
{
	ft_printf("\n*STACK A*\n\n");
	ft_printf("valore %d\n", stack->a[0]);
	ft_printf("valore %d\n", stack->a[1]);
	ft_printf("valore %d\n", stack->a[2]);
	ft_printf("valore %d\n", stack->a[3]);
	ft_printf("valore %d\n", stack->a[4]);
	ft_printf("valore %d\n", stack->a[5]);
	ft_printf("*STACK B*\n\n");
	ft_printf("valore %d\n", stack->b[0]);
	// ft_printf("valore %d\n", stack->b[1]);
}