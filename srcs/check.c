/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:07:06 by asacchin          #+#    #+#             */
/*   Updated: 2023/03/21 19:42:08 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(int *a)
{
	free(a);
	write(2, "Error\n", 6);
	exit(0);
}

void	check_dup(int *a, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < len)
	{
		while (j < len)
		{
			if (a[i] == a[j])
				ft_error(a);
			j++;
		}
		i++;
		j = i + 1;
	}
}
