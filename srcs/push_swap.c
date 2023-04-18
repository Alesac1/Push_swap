/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:43:19 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/18 15:06:54 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	printstack(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len_a)
	{
		printf("stack->a %d\n", stack->a[i]);
		i++;
	}
	i = 0;
	write(1, "\n", 1);
	while (i < stack->len_b)
	{
		printf("stack->b %d\n", stack->b[i]);
		i++;
	}
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
