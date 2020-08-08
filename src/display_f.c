#include "../includes/ft_printf.h"

void	display_plain_f(t_format *formater, float num)
{
	int whole_p;
	int fract_p;

	whole_p = (int) num;
}

void	display_Lf(t_format *formater, long double num)
{

}

void	display_lf(t_format *formater, double num)
{
	ft_print_binary
}

void	display_f(t_format *formater)
{
	if (formater->current_arg->length == L_LENGTH)
		display_Lf(formater, va_arg(formater->argc, long double));
	else if (formater->current_arg->length == L_JR_LENGTH)
		display_Lf(formater, va_arg(formater->argc, double));
	else
		display_Lf(formater, va_arg(formater->argc, float));
}
