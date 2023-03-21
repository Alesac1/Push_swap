/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:30:57 by asacchin          #+#    #+#             */
/*   Updated: 2023/03/21 20:02:31 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "include/Libft/libft.h"

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		len_a;
	int		len_b;
	int		moves;
}				t_stack;

void	check_dup(int *a, int len);
t_stack	*input_check(int argc, char **argv);

#endif