# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 22:50:19 by flazerak          #+#    #+#              #
#    Updated: 2022/08/25 18:53:35 by flazerak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS_NAME = checker
SRC = ./srcs/push_swap.c\
			./srcs/parsing.c\
			./srcs/lst.c\
			./srcs/op.c\
			./srcs/op2.c\
			./srcs/op3.c\
			./srcs/op4.c\
			./srcs/indexes.c\
			./srcs/radix_sort.c\
			./srcs/sort.c\
			./srcs/fill_in.c\
			./utils/atoi_substr.c\
			./utils/ft_strjoin.c\
			./utils/split.c


BONUS_SRC = ./bonus_srcs/push_swap_bonus.c\
			./bonus_srcs/do_push.c\
			./bonus_srcs/fill_in_bonus.c\
			./bonus_srcs/ops_bonus.c\
			./bonus_srcs/ops2_bonus.c\
			./bonus_srcs/parsing_checker.c\
			./bonus_srcs/indexes_bonus.c\
			./bonus_srcs/lst_bonus.c\
			./bonus_srcs/exit.c\
			./utils/atoi_substr.c\
			./utils/ft_strjoin.c\
			./utils/split.c\
			./gnl/get_next_line.c\
			./gnl/get_next_line_utils.c
			
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)


RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

CC = gcc
all: $(NAME)
bonus: $(BONUS_NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Compiling Successfull"


$(BONUS_NAME): $(BONUS_OBJ) 
	@$(CC) $(CFLAGS) $(BONUS_OBJ) -o $(BONUS_NAME)
	@echo "Compiling Successfull"


%.o : %.c  push_swap.h push_swap_bonus.h gnl/get_next_line.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) $(NAME) $(BONUS_NAME)
	@echo "Clear"

re: fclean all