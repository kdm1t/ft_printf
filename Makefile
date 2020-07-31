NAME = ft_printf
SRCS = ./src/*.c
OBJS = ft_printf.o
SRCS_FOLDER=./src/.
INCLUDES = ./includes/.
FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft/

all: $(NAME)

$(NAME): $(OBJS)
			gcc $(FLAGS) -c $(SRCS) -I $(INCLUDES)
			gcc $(FLAGS) $(OBJS) -o $(NAME)


%.o: $(SRCS_FOLDER)%.c
		gcc $(FLAGS) -c $<

clean:
		rm -f $(OBJS)
		make -C $(LIBFT) clean

fclean: clean
		rm -f $(NAME)
		make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re