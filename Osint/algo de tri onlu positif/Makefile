##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Compiler
##

NAME	= push_swap

CC		= gcc

RM		= rm -f

SRC		= src/main.c \
		src/open_file.c \
		src/push_swap.c \
		src/utils.c

OBJ		= $(SRC:.c=.o)

LIBFLAG	= -L lib/my/ -lmy

CFLAGS = -I include/

all: $(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	$(CC) $(SRC) -o $(NAME) $(LIBFLAG) $(CFLAGS)


clean:
	rm -rf $(OBJ)
	$(MAKE) clean -C lib/my clean
	$(RM) *.gcno *.gcda

fclean:		clean
	rm -rf $(NAME)
	$(MAKE) fclean -C lib/my fclean

re:			fclean all

test_run : $(MAKE) -C ../tests

.phony:	all clean fclean re
