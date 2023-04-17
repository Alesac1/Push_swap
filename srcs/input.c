/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:48:18 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/17 18:43:09 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	write_stack(int argc, char **argv, int i, t_stack *stack)
{
	int	j;

	stack->a = (int *)malloc(sizeof(int) * (argc - 1));
	stack->b = (int *)malloc(sizeof(int) * (argc - 1));
	j = 0;
	while (i < argc)
		stack->a[j++] = ft_atoi(argv[i++], stack->a);
	check_dup(stack->a, j);
	stack->len_a = j;
	stack->len_b = 0;
	stack->move = 0;
}

t_stack	*input_check(int argc, char **argv)
{
	t_stack	*stack;
	char	**tmp;
	int		len;

	len = 0;
	tmp = NULL;
	if (argc == 2)
	{
		tmp = ft_split(argv[1], 32);
		while (tmp[len] != NULL)
			len++;
		stack = malloc(len * sizeof(t_list));
		write_stack(len, tmp, 0, stack);
		free(tmp);
	}
	else if (argc >= 3)
	{
		stack = malloc((argc - 1) * sizeof (t_list));
		write_stack(argc, argv, 1, stack);
	}
	else
		return (NULL);
	return (stack);
}
