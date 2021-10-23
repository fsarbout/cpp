NAME = last

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

SRC = *.cpp
	
all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	@rm -rf *.o
	@rm -rf *_shrubbery

fclean: clean
	@rm -rf $(NAME) 
re:	fclean all