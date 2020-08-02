#include "../includes/ft_printf.h"

void	set_precision(t_format *formater)
{
	formater->current_arg->precision = ft_atoi(&formater->format[formater->i_symbol]);
	while (formater->format[formater->i_symbol] != '\0' &&
					ft_isdigit(formater->format[formater->i_symbol]) == 1)
		formater->i_symbol++;
}

void	set_width(t_format *formater)
{
	formater->current_arg->width = ft_atoi(&formater->format[formater->i_symbol]);
	while (formater->format[formater->i_symbol] != '\0'&&
					ft_isdigit(formater->format[formater->i_symbol]) == 1)
		formater->i_symbol++;
}

void	set_flag(t_format *formater)
{
	if(formater->format[formater->i_symbol] == '-')
		formater->current_arg->flag = formater->current_arg->flag | MINUS_FLAG;
	if(formater->format[formater->i_symbol] == '+')
		formater->current_arg->flag = formater->current_arg->flag | PLUS_FLAG;
	if(formater->format[formater->i_symbol] == ' ')
		formater->current_arg->flag = formater->current_arg->flag | SPACE_FLAG;
	if(formater->format[formater->i_symbol] == '#')
		formater->current_arg->flag = formater->current_arg->flag | HASH_FLAG;
	if(formater->format[formater->i_symbol] == '0')
		formater->current_arg->flag = formater->current_arg->flag | ZERO_FLAG;
	if (formater->format[formater->i_symbol + 1] != '\0' && formater->current_arg->flag > 0)
		formater->i_symbol++;
}

//%[parameter][flags][width][.precision][length]type

void	set_length(t_format *formater)
{
	if (formater->format[formater->i_symbol] == 'l' && formater->format[formater->i_symbol + 1] == 'l')
	{
		formater->current_arg->length = LL_LENGTH;
		formater->i_symbol++;
	}
	else if (formater->format[formater->i_symbol] == 'h' && formater->format[formater->i_symbol + 1] == 'h')
	{
		formater->current_arg->length = HH_LENGTH;
		formater->i_symbol++;
	}
	else if (formater->format[formater->i_symbol] == 'l')
		formater->current_arg->length = L_JR_LENGTH;
	else if (formater->format[formater->i_symbol] == 'h')
		formater->current_arg->length = H_LENGTH;
	else if (formater->format[formater->i_symbol] == 'L')
		formater->current_arg->length = L_LENGTH;
	if (formater->format[formater->i_symbol + 1] != '\0' && formater->current_arg->length > 0)
		formater->i_symbol++;
}

void	set_type(t_format *formater)
{
	if (formater->format[formater->i_symbol] == 'c')
		formater->current_arg->type = C_TYPE;
	else if (formater->format[formater->i_symbol] == 's')
		formater->current_arg->type = S_TYPE;
	else if (formater->format[formater->i_symbol] == 'p')
		formater->current_arg->type = P_TYPE;
	else if (formater->format[formater->i_symbol] == 'd')
		formater->current_arg->type = D_TYPE;
	else if (formater->format[formater->i_symbol] == 'i')
		formater->current_arg->type = I_TYPE;
	else if (formater->format[formater->i_symbol] == 'o')
		formater->current_arg->type = O_TYPE;
	else if (formater->format[formater->i_symbol] == 'u')
		formater->current_arg->type = U_TYPE;
	else if (formater->format[formater->i_symbol] == 'x')
		formater->current_arg->type = X_JR_TYPE;
	else if (formater->format[formater->i_symbol] == 'X')
		formater->current_arg->type = X_TYPE;
	else if (formater->format[formater->i_symbol] == 'f')
		formater->current_arg->type = F_TYPE;
	
}

void	parse_arg(t_format *formater)
{
	if (formater->format[formater->i_symbol + 1] == '\0') {
		//error
	}

	formater->current_arg = (t_arg*) malloc(sizeof(t_arg));
	formater->i_symbol++;
	while (is_type(formater->format[formater->i_symbol]) != 1)
	{
		set_flag(formater);
		set_width(formater);
		if (formater->format[formater->i_symbol] == '.') {
			formater->i_symbol++;
			set_precision(formater);
		}
		set_length(formater);
	}
	set_type(formater);
}

int		is_type(char sym) {
	char	*types;
	int i;

	types = ft_strdup("cspdiouxXf");
	i = 0;
	while (types[i] != '\0') {
		if (types[i] == sym) {
			return 1;
		}
		i++;
	}
	return (0);
}
