# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 16:20:50 by jlucas-s          #+#    #+#              #
#    Updated: 2023/10/23 23:16:07 by jlucas-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Bureaucrat

GREEN		= \033[1;32m
YELLOW		= \033[1;33m
RED			= \033[1;31m
PURPLE		= \033[0;35m
CYAN		= \033[0;36m
NOCOLOR		= \033[0m

INC			=	-I classes/Bureaucrat	\


SRCS		= 	src/main.cpp						\
				classes/Bureaucrat/Bureaucrat.cpp	\


OBJS_DIR	= ./objects
OBJS		= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	@ echo "$(CYAN)Compiling...$(NOCOLOR)"
	@ $(CC) $(CFLAGS) $(OBJS) -o $@
	@ echo "$(GREEN)Successfully compiled!$(NOCOLOR)"
	@ echo ""
	@ echo "${PURPLE}\
\n/* ************************************************************************** */		\
\n/*                                                                            */		\
\n/*            :::      ::::::::                                               */		\
\n/*          :+:      :+:    :+:                                               */		\
\n/*        +:+ +:+         +:+               CPP Module 05 | $(notdir $(shell pwd))              */		\
\n/*      +#+  +:+       +#+                                                    */		\
\n/*    +#+#+#+#+#+   +#                                                        */		\
\n/*         #+#    #+#           By: jlucas-s <jlucas-s@student.42sp.org.br>   */		\
\n/*        ###   ########.fr                                                   */		\
\n/*                                                                            */		\
\n/* ************************************************************************** */\n	\
	${NOCOLOR}"
	@ echo ""
	@ echo "$(YELLOW)To run the project:$(NOCOLOR)"
	@ echo "> ./$(NAME)"
	@ echo ""
	@ echo ""

$(OBJS_DIR)/%.o: %.cpp
	@ echo "$(YELLOW)Linking $<$ $(NOCOLOR)"
	@ mkdir -p $(dir $@)
	@ $(CC) $(INC) $(CFLAGS) -c $< -o $@

clean:
	@ echo "$(RED)Cleaning...$(NOCOLOR)"
	@ rm -rf $(OBJS_DIR)

fclean: clean
	@ echo "$(RED)Fcleaning...$(NOCOLOR)"
	@ rm -f $(NAME)

re: fclean all

run: $(NAME)
	@ ./$(NAME)
	
.PHONY: all clean fclean re run