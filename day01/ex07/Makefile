NAME = replacemyfile
SRC = main.cpp
CFLAG = -Wall -Wextra -Werror
INCLUDE = -I .
DELETE = rm -f *.o

all: $(NAME)

$(NAME):
	clang++ $(CFLAG) $(SRC) $(INCLUDE) -o $(NAME)

clean:
	$(DELETE)

fclean : clean
	$(DELETE) $(NAME)

re : fclean all

.PHONY: clean fclean re all 