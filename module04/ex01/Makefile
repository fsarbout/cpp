NAME = Fire

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror -Wshadow -fsanitize=address

SRC = *.cpp
	
all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME) 
re:	fclean all