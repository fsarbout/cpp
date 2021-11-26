NAME = easyfind

CC = clang++

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98

SRC = *.cpp
	
all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME) 
re:	fclean all
