#include "../includes/ft_printf.h"
#include <stdint.h>

int main(void) {
	// long long int test = 9223372036854775807;
	// ft_printf("%.2d\n", test + 1);
	// printf("%05.4d\n", 123);
	// printf("%d\n", length_of_number(123));
	// printf("%d\n", length_of_number(0));
	// printf("%d\n", length_of_number(3));
	// printf("%d\n", length_of_number(-123124));
	// printf("FOR: %lld	", test + 1);
	// printf("%d\n", length_of_number(test + 1));
	// ft_printf("%43d\n", 14214);
	ft_printf("%-2.12d\n", 14214);
	printf("%-2.12d\n", 14214);
	return (0);
}
