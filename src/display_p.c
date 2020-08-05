#include "../includes/ft_printf.h"

void	display_p_width(t_format *formater, unsigned long int ptr) {
	int amount_space;

	amount_space = formater->current_arg->width - (size_of_number(ptr, 16) + 2);
	while (amount_space > 0) {
		ft_putchar(' ');
		amount_space--;
	}
}

void	display_p(t_format *formater){
	unsigned long int ptr;
	char				*result;

	ptr = va_arg(formater->argc, unsigned long int);

	if ((formater->current_arg->flag & MINUS_FLAG) != MINUS_FLAG)
		display_p_width(formater, ptr);
	result = convert_to_hexadecimal(ptr, FALSE);
	ft_putstr("Ox");
	ft_putstr(result);
	if ((formater->current_arg->flag & MINUS_FLAG) == MINUS_FLAG)
		display_p_width(formater, ptr);
}
