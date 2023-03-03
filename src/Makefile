##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Compiler
##

NAME = a.out

CC = gcc

RM = rm -f

SRC = src/main.c \

OBJ = $(SRC:.c=.o)

LIBFLAG = -L lib/my/ -lmy

CFLAGS = -I include/ -Wall -Wextra -Werror

NO_COLOR=\033[0m
OK_COLOR=\033[32;01m
ERROR_COLOR=\033[31;01m
WARN_COLOR=\033[33;01m

all:
	@printf "$(OK_COLOR)Building target $(NAME) $(NO_COLOR)\n"
	$(MAKE) -C lib/my
	$(CC) $(SRC) -o $(NAME) $(LIBFLAG) $(CFLAGS)
	@printf "$(OK_COLOR)Build successful! $(NO_COLOR)\n"

.PHONY: clean
clean:
	@printf "$(WARN_COLOR)Cleaning object files... $(NO_COLOR)\n"
	rm -rf $(OBJ)
	$(MAKE) clean -C lib/my clean
	$(RM) *.gcno *.gcda
	@printf "$(OK_COLOR)Cleaning done! $(NO_COLOR)\n"

.PHONY: fclean
fclean:
	@printf "$(WARN_COLOR)Removing binary file... $(NO_COLOR)\n"
	rm -rf $(NAME)
	$(MAKE) fclean -C lib/my fclean
	@printf "$(OK_COLOR)Removing done! $(NO_COLOR)\n"

.PHONY: re
re: fclean all

.PHONY: test_run
test_run :
		@printf "$(OK_COLOR)Running tests... $(NO_COLOR)\n"
		$(MAKE) -C ../tests
		@printf "$(OK_COLOR)Tests done! $(NO_COLOR)\n"
