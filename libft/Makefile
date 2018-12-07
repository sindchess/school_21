CC = gcc
KEYS = -Wall -Werror -Wextra -std=c99
LIB = libft.a

all:
	@gcc $(KEYS) -c $(FUNCTIONS)*.c
	@ar crs $(LIB) *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(LIB) 

re:	fclean all