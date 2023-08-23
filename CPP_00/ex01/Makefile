# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 16:20:50 by jlucas-s          #+#    #+#              #
#    Updated: 2023/08/22 19:48:14 by jlucas-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

GREEN		= \033[1;32m 
YELLOW		= \033[1;33m 
RED			= \033[1;31m 
NOCOLOR		= \033[0m

INC			= -I ./includes 

SRCS		=	src/main.cpp		\
				src/Contact.cpp		\
				src/PhoneBook.cpp	\

OBJS_DIR	= ./objects
OBJS		= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@ echo "$(YELLOW)Compiling...$(NOCOLOR)"
	@ $(CC) $(CFLAGS) $(OBJS) -o $@
	@ echo "$(GREEN)Successfully compiled!$(NOCOLOR)"

$(OBJS_DIR)/%.o: %.cpp
	@ echo "$(YELLOW)Linking...$(NOCOLOR)"
	@ mkdir -p $(dir $@)
	@ $(CC) $(INC) $(CFLAGS) -c $< -o $@

clean:
	@ echo "$(RED)Cleaning...$(NOCOLOR)"
	@ rm -rf $(OBJS_DIR)

fclean: clean
	@ echo "$(RED)Fcleaning...$(NOCOLOR)"
	@ rm -f $(NAME)

re: fclean all
	

.PHONY: all clean fclean re