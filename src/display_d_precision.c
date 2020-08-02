#include "../includes/ft_printf.h"

void	display_d_precision(t_format *formater, long long int n)
{
	int dif = length_of_number(n) - (formater->current_arg->precision);
	printf("%d", dif);

}
