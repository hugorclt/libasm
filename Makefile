NAME 		= 	libasm

LIB 		= 	libasm.a

SRC_DIR		=	src_asm

FILES 		= 	ft_write.s\
				ft_strlen.s\
				ft_read.s\
				ft_strcpy.s

				#ft_strdup.s\
				#ft_strcmp.s\

SRCS 		= 	$(addprefix $(SRC_DIR)/, $(FILES))

INCL		=	libasm.h

CFILES 		= 	main.c

CC 			= 	gcc

CFLAGS 		= 	-Wall -Wextra -Werror

NASM 		= 	nasm 

ASMFLAGS	=	-f elf64

OBJ 		= 	$(SRCS:.s=.o)

%.o			: 	%.s 
				@printf "\033[0;33mGenerating libasm object... %-38.38s\r" $@
				@printf "\n"
				@$(NASM) $(ASMFLAGS) $< -o $@

	
all 		: 	$(NAME)

$(NAME)		: 	$(OBJ)
			  	@ar rcs $(LIB) $(OBJ)
				@echo "\033[0;33mDone!\033[0m"

test 		: 	
		      	@$(CC) $(CFLAGS) main.c $(LIB)
				@echo "\033[0;33mDone!\033[0m"

clean		:
				@rm -f main.o
		      	@rm -f $(OBJ)
				@echo "\033[0;33mObject cleaned!\033[0m"

fclean		:	
				@rm -f main.o
		      	@rm -f $(OBJ)
				@rm -f $(LIB)
				@rm -f ./a.out
				@echo "\033[0;33mObject, program and library cleaned\033[0m"

re			:	fclean all

.PHONY		:
				all test clean fclean re