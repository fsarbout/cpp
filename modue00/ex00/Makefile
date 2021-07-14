# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsarbout <fsarbout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 20:14:43 by fsarbout          #+#    #+#              #
#    Updated: 2021/07/14 21:18:40 by fsarbout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Metaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = *.cpp
	
all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME) 
re:	fclean all