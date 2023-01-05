# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avillar <avillar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 13:16:24 by avillar           #+#    #+#              #
#    Updated: 2023/01/05 15:33:00 by avillar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRCS =	srcs/main.cpp					\
		srcs/Bureaucrat.cpp				\
		srcs/Form.cpp					\
		srcs/ShrubberyCreationForm.cpp	\
		srcs/RobotomyRequestForm.cpp	\
		srcs/PresidentialPardonForm.cpp	\

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;32m [OK] \033[0m		\033[0;35m Compiling:\033[0m" $(SRCS)
	@$(CXX) $(OBJS) -o	$(NAME)
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