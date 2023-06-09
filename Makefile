# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 16:01:01 by asacchin          #+#    #+#              #
#    Updated: 2023/04/17 12:44:28 by asacchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	srcs/check.c srcs/input.c srcs/push_swap.c Utils/ft_atoi.c Moves/push.c Moves/swap.c Moves/rotate.c Moves/reverse_rotate.c srcs/sorting.c Utils/utils.c srcs/cicle_a.c srcs/half_b_utils.c srcs/half.c srcs/init.c srcs/cicle_b.c Utils/utils2.c srcs/half_a_utils.c
OBJ = ${SRC:.c=.o}
NAME = push_swap

# SRC_B =	bonus/checker.c
# OBJ_B =	${SRC_B:.c=.o}
# NAME_B = checker
# OUT = ${filter-out srcs/push_swap.o ,${OBJ}}

CC = gcc -Wall -Wextra -Werror -g
FT_PRINTF = include/ft_printf
LIBFT = include/Libft
LIBRARY = include/ft_printf/libftprintf.a include/libft/libft.a

.c.o:
	@${CC} -c $< -o ${<:.c=.o}

all	: $(NAME)

$(NAME) : $(OBJ)
	@make -C $(FT_PRINTF)
	@make -C $(LIBFT)
	@$(CC) $(OBJ) $(LIBRARY) -o $(NAME)

# bonus : $(NAME) $(OBJ_B)
# 	@$(CC) $(OUT) $(OBJ_B) $(LIBRARY) -o $(NAME_B)

clean :
	@make clean -C $(FT_PRINTF)
	@make clean -C $(LIBFT)
	@rm -f $(OBJ)
	
fclean : clean
	@make fclean -C $(FT_PRINTF)
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)
	
re : fclean all bonus

.PHONY: all clean fclean re
