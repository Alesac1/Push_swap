/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:43:19 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 19:00:49 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void	printstack(t_stack *stack)
{
	ft_printf("\n*STACK A*\n\n");
	ft_printf("valore %d\n", stack->a[0]);
	ft_printf("valore %d\n", stack->a[1]);
	ft_printf("valore %d\n", stack->a[2]);
	ft_printf("valore %d\n", stack->a[3]);
	ft_printf("valore %d\n", stack->a[4]);
	ft_printf("valore %d\n", stack->a[5]);
	ft_printf("valore %d\n", stack->a[6]);
	ft_printf("valore %d\n", stack->a[7]);
	ft_printf("valore %d\n", stack->a[8]);
	// ft_printf("valore %d\n", stack->a[9]);
	ft_printf("*STACK B*\n\n");
	ft_printf("valore %d\n", stack->b[0]);
	ft_printf("valore %d\n", stack->b[1]);
	ft_printf("valore %d\n", stack->b[2]);
	ft_printf("valore %d\n", stack->b[3]);
	ft_printf("valore %d\n", stack->b[4]);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	if (argc < 2)
		return (0);
	stack = input_check(argc, argv);
	initialize_val(stack);
	sortnum(stack);
	printstack(stack);
}
