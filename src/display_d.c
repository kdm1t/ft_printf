#include "../includes/ft_printf.h"

void	display_d(t_format *formater)
{
	intmax_t num;

	num = get_d(formater);
	if ((formater->current_arg->flag & PLUS_FLAG) == PLUS_FLAG)
	{
		ft_putchar('+');
	}
	display_d_precision(formater, num);
	display_d_1(num);

}

void	display_d_1(long long int n)
{
		if (n > 10 || n < -10)
		{
			display_d_2(n / 10);
			if (n < 0)
			{
				display_d_2((n % 10) * (-1));
			}
			else
				display_d_2(n % 10);
		} else
			display_d_2(n);
}

void	display_d_2(long long int n)
{
	long long int nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
		display_d_2(nb / 10);
	ft_putchar(nb % 10 + 48);
}

long long int	get_d(t_format *formater)
{
	long long int num;

	if (formater->current_arg->length == L_JR_LENGTH)
		num = va_arg(formater->argc, long int);
	else if (formater->current_arg->length == LL_LENGTH)
		num = va_arg(formater->argc, long long int);
	else if (formater->current_arg->length == H_LENGTH)
		num = (short)va_arg(formater->argc, int);
	else if (formater->current_arg->length == HH_LENGTH)
		num = (char)va_arg(formater->argc, int);
	else
		num = va_arg(formater->argc, int);
	return (num);
}

