#include "../includes/ft_printf.h"

char		*convert_to_hexadecimal(unsigned long long int number, int isUpperCase) {
	char	*result;
	char	*letters;
	int		i;

	if (isUpperCase)
		letters = ft_strdup("0123456789ABCDEF");
	else if (!isUpperCase)
		letters = ft_strdup("0123456789abcdef");
	i = size_of_number(number, 16);
	result = (char*)malloc(sizeof(char) * (i + 1));
	if (number == 0)
		result[0] = '0';
	while (number > 0)
	{
		result[--i] = letters[number % 16];
		number /= 16;
	}
	return (result);
}


char	*convert_to_base(unsigned long long int number, unsigned int base)
{
	char	*result;
	int		i;

	i = size_of_number(number, base);
	result = (char*)malloc(sizeof(char) * (i + 1));
	if (number == 0)
	    result[0] = '0';
	while (number > 0)
	{
		result[--i] = number % base + 48;
		number /= base;
	}
	return (result);
}

int		size_of_number(unsigned long long int number, unsigned int base)
{
    int counter;

    if (number == 0)
        return (1);
    counter = 0;
    while (number > 0)
    {
        number /= base;
        counter++;
    }
    return(counter);
}
