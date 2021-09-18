NAME = karenFilter

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

SRC = Karen.cpp\
	main.cpp
	
all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	@rm -rf *.o
	@rm -rf *.replace

fclean: clean
	@rm -rf $(NAME) 
re:	fclean all