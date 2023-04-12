/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:11:58 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 18:04:04 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_moves(t_stack *stack)
{
	stack->moves.pa = 0;
	stack->moves.pb = 0;
	stack->moves.ra = 0;
	stack->moves.rb = 0;
	stack->moves.rr = 0;
	stack->moves.rra = 0;
	stack->moves.rrb = 0;
	stack->moves.rrr = 0;
	stack->moves.sa = 0;
	stack->moves.sb = 0;
}

int	initialize_val(t_stack *stack)
{
	stack->len_b = 0;
	stack->max_a = 0;
	stack->min_a = 0;
	stack->max_b = 0;
	stack->min_b = 0;
	stack->len_b = 0;
	// ft_printf("ciao\n");
	return (0);
}

int	get_input_num(char **av)
{
	char	**value_to_split;
	int		j;
	int		i;
	int		counter;

	counter = 0;
	j = 0;
	while (av[++j])
	{
		ft_is_valid_num(av, j);
		i = 0;
		value_to_split = ft_split(av[j], 32);
		while (value_to_split[i])
			i++;
		if (i == 0)
			ft_error();
		else if (i == 1)
			counter++;
		else if (i > 1)
			counter += i;
		ft_free_mem(value_to_split, 1);
	}
	return (counter);
}

void	ft_is_valid_num(char **av, int j)
{
	int		z;

	z = 0;
	while (av[j][z])
	{
		if (((av[j][z] == '-') && (!ft_isdigit(av[j][z + 1])))
		|| ((av[j][z] == '+') && (!ft_isdigit(av[j][z + 1]))))
			ft_error();
		if ((ft_isdigit(av[j][z])) || (av[j][z] == 32)
			|| (av[j][z] == '-') || (av[j][z] == '+'))
			z++;
		else
			ft_error();
	}
}

int	ft_free_mem(char **matrix, int f)
{
	int	i;

	i = 0;
	if (f == 1)
	{
		while (matrix[i])
		{
			free(matrix[i]);
			i++;
		}
		free(matrix);
		return (1);
	}
	return (0);
}