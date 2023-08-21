# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 16:20:50 by jlucas-s          #+#    #+#              #
#    Updated: 2023/08/21 16:42:04 by jlucas-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 

OBJS_DIR	= obj

SRCS		= .cpp
OBJS		= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@ $(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJS_DIR)/%.o: %.cpp
	@ mkdir -p $(OBJS_DIR)
	@ $(CC) $(CFLAGS) -c $< -o $@

clean:
	@ rm -rf $(OBJS_DIR)

fclean: clean
	@ rm $(NAME)

re: fclean all
	

.PHONY: all clean fclean re