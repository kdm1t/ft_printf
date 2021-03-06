NAME = ft_printf
SRCS = \
	$(SRCS_FOLDER)main.c \
	$(SRCS_FOLDER)ft_printf.c \
	$(SRCS_FOLDER)init_format.c \
	$(SRCS_FOLDER)display_arg.c \
	$(SRCS_FOLDER)parse_arg.c \
	$(SRCS_FOLDER)display_d.c \
	$(SRCS_FOLDER)display_d_precision.c \
	$(SRCS_FOLDER)length_of_number.c \
	$(SRCS_FOLDER)display_d_width.c \
	$(SRCS_FOLDER)display_c.c \
	$(SRCS_FOLDER)display_s.c \
	$(SRCS_FOLDER)display_p.c \
	$(SRCS_FOLDER)converter.c \
	$(SRCS_FOLDER)display_u.c

OBJS = \
	main.o \
	ft_printf.o \
	init_format.o \
	display_arg.o \
	parse_arg.o \
	display_d.o \
	display_d_precision.o \
	length_of_number.o \
	display_d_width.o \
	display_c.o \
	display_s.o \
	display_p.o \
	converter.o \
	display_u.o

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
