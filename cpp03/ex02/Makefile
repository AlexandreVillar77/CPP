# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avillar <avillar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 13:16:24 by avillar           #+#    #+#              #
#    Updated: 2022/12/06 15:38:05 by avillar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

SRCS =	srcs/main.cpp			\
		srcs/ClapTrap.cpp		\
		srcs/ScavTrap.cpp		\
		srcs/FragTrap.cpp		\

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;32m [OK] \033[0m		\033[0;35m Compiling:\033[0m" $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS)-o	$(NAME)
	@echo "\033[0;32m [OK] \033[0m		\033[0;35m Creating:\033[0m" $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "\033[0;32m [OK] \033[0m		\033[0;35m Delete:\033[0m" $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;32m [OK] \033[0m		\033[0;35m Delete:\033[0m" $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJS)