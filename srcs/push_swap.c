/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:43:19 by asacchin          #+#    #+#             */
/*   Updated: 2023/03/24 17:42:53 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc < 2)
		return (0);
	stack = input_check(argc, argv);
	printstack(stack);
}

void	printstack(t_stack *stack)
{
	ft_printf("STACK A\n");
	ft_printf("valore %d\n", stack->a[0]);
	ft_printf("valore %d\n", stack->a[1]);
	ft_printf("valore %d\n", stack->a[2]);
	ft_printf("valore %d\n", stack->a[3]);
	ft_printf("valore %d\n", stack->a[4]);
	ft_printf("valore %d\n", stack->a[5]);
	ft_printf("STACK B\n");
	ft_printf("valore %d\n", stack->b[0]);
	ft_printf("valore %d\n", stack->b[1]);
}