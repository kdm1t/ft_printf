#include "../includes/ft_printf.h"

void	display_p(t_format *formater){
	unsigned long int ptr;
	char				*result;

	ptr = va_arg(formater->argc, unsigned long int);
	result = convert_to_hexadecimal(ptr, FALSE);
	ft_putstr(result);
}
