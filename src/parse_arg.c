#include "../includes/ft_printf.h"

void	parse_arg(t_format *formater) {

	while (is_type(formater->format[formater->i_symbol]) != 1) {
		ft_putchar(formater->format[formater->i_symbol]);
		formater->i_symbol++;
	}
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
