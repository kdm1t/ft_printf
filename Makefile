NAME = ft_printf
SRCS = ./src/*.c
OBJS = ft_printf.o main.o init_format.o display_arg.o parse_arg.o
SRCS_FOLDER=./src/
INCLUDES = ./includes/
FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft/
OBJ_DIR = obj/


all: $(NAME)

O_FILES = $(SRCS:%.c=%.o)

$(NAME): $(OBJ_DIR) $(OBJS)
			gcc $(FLAGS) -c $(SRCS) -I $(INCLUDES)
			gcc $(FLAGS) $(OBJS) -o $(NAME) -L. libft/libft.a

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)



%.o: $(SRCS_FOLDER)%.c
		gcc $(FLAGS) -c $<

clean:
		rm -f $(OBJS)


fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
"editor.tabSize": 4,
"editor.insertSpaces": false,
"editor.renderWhitespace": "all",
"files.trimTrailingWhitespace": true,
"files.insertFinalNewline": true,
