#include "../includes/ft_printf.h"

int	length_of_number(long long int n)
{
	int count;

	count = 0;
	if (n > 10 || n < -10)
	{

		if (n < 0)
		{
			count += length_of_number_2((n / 10) * (-1));
			count += length_of_number_2((n % 10) * (-1));
		}
		else
		{
			count += length_of_number_2(n / 10);
			count += length_of_number_2(n % 10);
		}
	}
	else
		count += length_of_number_2(n);
	return (count);
}

int		length_of_number_2(long long int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int		length_of_number_ui(unsigned int num)
{
	int count;

	count = 0;
	if (num == 0)
		return (1);
	while (num > 0) {
		num /= 10;
		count++;
	}
	return (count);
}
