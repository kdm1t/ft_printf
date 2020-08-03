#include "../includes/ft_printf.h"

void	display_c(t_format *formater) {
	char sym;

	sym = (char)va_arg(formater->argc, int);
	if ((formater->current_arg->flag & MINUS_FLAG) != MINUS_FLAG)
		display_c_width(formater);
	ft_putchar(sym);
	if ((formater->current_arg->flag & MINUS_FLAG) == MINUS_FLAG)
		display_c_width(formater);
}

void	display_c_width(t_format *formater) {
	int amount_space;

	amount_space = formater->current_arg->width - 1;
	while (amount_space > 0) {
		ft_putchar(' ');
		amount_space--;
	}
}
