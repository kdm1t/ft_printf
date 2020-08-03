#include "../includes/ft_printf.h"

void	display_d_precision(t_format *formater, long long int n)
{
	int dif;

	dif = (formater->current_arg->precision) - length_of_number(n);
	while (dif > 0)
	{
		ft_putchar('0');
		dif--;
	}
}

// void display_d_width(t_format *formater, long long int n)
// {
			// ЗАНЯТЬСЯ ШИРИНОЙ И "ПРИКЛЕЙКОЙ" ПО КРАЯМ ДЛЯ НЕЕ
// }
