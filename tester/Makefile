CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCL = -I.
SRC_DIR = src
CFILES = ft_strlen_test.c ft_write_test.c ft_strdup_test.c main.c
SRCS = $(addprefix $(SRC_DIR)/, $(CFILES))
NAME = libasm_tester
OBJ = $(SRCS:.c=.o)

%.o: %.c
	@printf "\033[0;33mCompiling $<... %-38.38s\r" $@
	@$(CC) $(CFLAGS) $(INCL) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	@printf "\n"
	@printf "\033[0;33mLinking objects... %-38.38s\r" $@
	$(CC) $(CFLAGS) $(OBJ) -L../ -lasm -o $(NAME)
	@echo "\033[0;32mDone!\033[0m"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re