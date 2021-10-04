# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsarbout <fsarbout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 20:14:43 by fsarbout          #+#    #+#              #
#    Updated: 2021/09/04 10:04:20 by fsarbout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++ -std=c++98

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