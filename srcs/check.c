/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:07:06 by asacchin          #+#    #+#             */
/*   Updated: 2023/04/12 16:43:00 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
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
				ft_error();
			j++;
		}
		i++;
		j = i + 1;
	}
}
