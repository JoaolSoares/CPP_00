# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 16:20:50 by jlucas-s          #+#    #+#              #
#    Updated: 2023/09/04 19:20:18 by jlucas-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

GREEN		= \033[1;32m 
YELLOW		= \033[1;33m 
RED			= \033[1;31m 
PURPLE		= \033[0;35m
CYAN		= \033[0;36m
NOCOLOR		= \033[0m

OBJS_DIR	= objects

SRCS		= megaphone.cpp
OBJS		= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@ echo "$(CYAN)Compiling...$(NOCOLOR)"
	@ $(CC) $(CFLAGS) $(OBJS) -o $@
	@ echo "$(GREEN)Successfully compiled!$(NOCOLOR)"
	@ echo ""
	@ echo "${PURPLE}\
\n/* ************************************************************************** */\
\n/*                                                                            */\
\n/*            :::      ::::::::                                               */\
\n/*          :+:      :+:    :+:                                               */\
\n/*        +:+ +:+         +:+               CPP Module 00 | ex00              */\
\n/*      +#+  +:+       +#+                                                    */\
\n/*    +#+#+#+#+#+   +#                                                        */\
\n/*         #+#    #+#           By: jlucas-s <jlucas-s@student.42sp.org.br>   */\
\n/*        ###   ########.fr                                                   */\
\n/*                                                                            */\
\n/* ************************************************************************** */\n\
	${NOCOLOR}"
	@ echo ""
	@ echo "$(YELLOW)To run the project:$(NOCOLOR)"
	@ echo "> ./megaphone [megaphone phrases]"
	@ echo ""
	@ echo ""

$(OBJS_DIR)/%.o: %.cpp
	@ echo "$(YELLOW)Linking $<$ $(NOCOLOR)"
	@ mkdir -p $(OBJS_DIR)
	@ $(CC) $(CFLAGS) -c $< -o $@

clean:
	@ echo "$(RED)Cleaning...$(NOCOLOR)"
	@ rm -rf $(OBJS_DIR)

fclean: clean
	@ echo "$(RED)Fcleaning...$(NOCOLOR)"
	@ rm -f $(NAME)

re: fclean all
	

.PHONY: all clean fclean re