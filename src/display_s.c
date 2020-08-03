#include "../includes/ft_printf.h"

void	display_s_width(t_format *formater, char *str) {
	int amount_space;

	amount_space = formater->current_arg->width - ft_strlen(str);
	while (amount_space > 0) {
		ft_putchar(' ');
		amount_space--;
	}
}

void	display_s(t_format *formater) {
	char *str;

	str = (char*)va_arg(formater->argc, char*);
	if ((formater->current_arg->flag & MINUS_FLAG) != MINUS_FLAG)
		display_s_width(formater, str);
	ft_putstr(str);
	if ((formater->current_arg->flag & MINUS_FLAG) == MINUS_FLAG)
		display_s_width(formater, str);
}
