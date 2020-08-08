#include "../includes/ft_printf.h"

void	display_u_width(t_format *formater, unsigned int num) {
	int count_space;
	int num_len;

	count_space = formater->current_arg->width - (formater->current_arg->flag & PLUS_FLAG);
	num_len = length_of_number_ui(num);
	count_space -= (num_len > formater->current_arg->precision)? num_len : formater->current_arg->precision;
	while (count_space > 0) {
		ft_putchar(' ');
		count_space--;
	}
}

void	display_u_precision(t_format *formater, unsigned int num)
{
	int dif;

	dif = (formater->current_arg->precision) - length_of_number_ui(num);
	while (dif > 0)
	{
		ft_putchar('0');
		dif--;
	}
}

void	display_all_u(long long unsigned int n)
{
	long long int nb;

	nb = n;
	if (nb >= 10)
		display_d_2(nb / 10);
	ft_putchar(nb % 10 + 48);
}


void	display_u(t_format *formater)
{
	long long int num;

	num = va_arg(formater->argc, unsigned int);
	if ((formater->current_arg->flag & MINUS_FLAG) != MINUS_FLAG)
		display_u_width(formater, num);
	display_u_precision(formater, num);
	if (formater->current_arg->length == H_LENGTH)
		display_all_u((unsigned short)num);
	else if (formater->current_arg->type == HH_LENGTH)
		display_all_u((unsigned char)num);
	else if (formater->current_arg->type == L_JR_LENGTH)
		display_all_u((unsigned ));
	if ((formater->current_arg->flag & MINUS_FLAG) == MINUS_FLAG)
		display_u_width(formater, num);
}


