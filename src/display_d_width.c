#include "../includes/ft_printf.h"

void	display_d_width(t_format *formater, long long int num) {
	int count_space;
	int num_len;

	count_space = formater->current_arg->width - (formater->current_arg->flag & PLUS_FLAG);
	num_len = length_of_number(num);
	count_space -= (num_len > formater->current_arg->precision)? num_len : formater->current_arg->precision;
	while (count_space > 0) {
		ft_putchar(' ');
		count_space--;
	}
}
