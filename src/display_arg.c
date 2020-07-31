#include "../includes/ft_printf.h"

void	display_arg(t_format *formater) {
	parse_arg(formater);
	//димон, тут уже будет распарсен аргумент в formater.current_arg(сам аргумент в argc, нужно вызвать va_arg(....))
	//далее надо вызывать функции, которые будут печатать его в консоль.
	//завтра напишу парсер
}
