NAME	= random
CC		= clang
RM		= rm -rf
FLAGS	= -Wall -Wextra -Werror -fsanitize=address -g3

FUNC	= srcs/main \
		  srcs/random \
		  srcs/utils

SRC		= $(addsuffix .c, $(FUNC))
OBJ		= $(addsuffix .o, $(FUNC))

.c.o	: $(NAME)
	@$(CC) $(FLAGS) -c -o $@ $^

$(NAME) : $(OBJ)
	@$(MAKE) -s -C srcs/libft
	@mv srcs/libft/libft.a .	
	@$(CC) $(FLAGS) $(RLFLAGS) $(OBJ) libft.a -o $@
	@$(RM) *.dSYM

all : $(NAME)

clean	:
	@$(RM) $(OBJ) *.dSYM
	@$(RM) srcs/libft/*.o

fclean	: clean
	@$(RM) $(NAME)
	@$(RM) libft.a

re		: fclean all

.PHONY	: .c.o all clean fclean re
