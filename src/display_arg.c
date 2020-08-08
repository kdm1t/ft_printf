#include "../includes/ft_printf.h"

void	display_arg(t_format *formater)
{

	/* CHECKER DLYA FORMATTERA
	 printf("flag: %d\n", formater->current_arg->flag);
	printf("width: %d\n", formater->current_arg->width);
	printf("precision: %d\n", formater->current_arg->precision);
	printf("length: %d\n", formater->current_arg->length);
	printf("type: %d\n", formater->current_arg->type); */


	//димон, тут уже будет распарсен аргумент в formater.current_arg(сам аргумент в argc, нужно вызвать va_arg(....))
	//далее надо вызывать функции, которые будут печатать его в консоль.

	parse_arg(formater);
	if (formater->current_arg->type == D_TYPE)
		display_d(formater);
	else if (formater->current_arg->type == C_TYPE)
		display_c(formater);
	else if (formater->current_arg->type == S_TYPE)
		display_s(formater);
	else if (formater->current_arg->type == P_TYPE)
		display_p(formater);
	else if (formater->current_arg->type == U_TYPE)
		display_u(formater);
	//else if (formater->current_arg->type == F_TYPE)
	//	display_f(formater);
}

