#include "../includes/ft_printf.h"
#include <stdint.h>
#include <values.h>

# define NORMUINT_MAX 4294967295

int main(void) {
	//ptr = &(*str);
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
	//ft_printf("%10.20s", "hello");
	//printf("a\n");
	// printf("%d", 21);
	//printf("a\n");
	// unsigned long long int test = ULLONG_MAX;
	// printf("Для шестнадцатеричной:\n");
	// printf("0 = %s\n", convert_to_hexadecimal(0, FALSE));
	// printf("1 = %s\n", convert_to_hexadecimal(1, FALSE));
	// printf("525 = %s\n", convert_to_hexadecimal(525, FALSE));
	// printf("10 = %s\n", convert_to_hexadecimal(10, FALSE));
	// printf("18446744073709551615 = %s\n", convert_to_hexadecimal(test, FALSE));

	// printf("0 = %s\n", convert_to_hexadecimal(0, TRUE));
	// printf("1 = %s\n", convert_to_hexadecimal(1, TRUE));
	// printf("525 = %s\n", convert_to_hexadecimal(525, TRUE));
	// printf("10 = %s\n", convert_to_hexadecimal(10, TRUE));
	// printf("18446744073709551615 = %s\n", convert_to_hexadecimal(test, TRUE));

	// printf("Для восьмеричной:\n");
	// printf("0 = %s\n", convert_to_base(0, 8));
	// printf("1 = %s\n", convert_to_base(1, 8));
	// printf("525 = %s\n", convert_to_base(525, 8));
	// printf("10 = %s\n", convert_to_base(10, 8));
	// printf("18446744073709551615 = %s\n", convert_to_base(test, 8));

	// printf("Для двоичной:\n");
	// printf("0 = %s\n", convert_to_base(0, 2));
	// printf("1 = %s\n", convert_to_base(1, 2));
	// printf("525 = %s\n", convert_to_base(525, 2));
	// printf("10 = %s\n", convert_to_base(10, 2));
	// printf("18446744073709551615 = %s\n", convert_to_base(test, 2));

	// printf("sizeofnumber 8:\n");
	// printf("0 = %d\n", size_of_number(0, 8));
	// printf("1 = %d\n", size_of_number(1, 8));
	// printf("525 = %d\n", size_of_number(525, 8));
	// printf("10 = %d\n", size_of_number(10, 8));
	// printf("18446744073709551615 = %d\n", size_of_number(test, 8));

	// printf("sizeofnumber 2:\n");
	// printf("0 = %d\n", size_of_number(0, 2));
	// printf("1 = %d\n", size_of_number(1, 2));
	// printf("525 = %d\n", size_of_number(525, 2));
	// printf("10 = %d\n", size_of_number(10, 2));
	// printf("18446744073709551615 = %d\n", size_of_number(test, 2));

	// printf("sizeofnumber 16:\n");
	// printf("0 = %d\n", size_of_number(0, 16));
	// printf("1 = %d\n", size_of_number(1, 16));
	// printf("525 = %d\n", size_of_number(525, 16));
	// printf("10 = %d\n", size_of_number(10, 16));
	// printf("18446744073709551615 = %d\n", size_of_number(test, 16));
	// printf("%f\n", 3.4E+38);
	// printf("%f\n", 3.4E+40);
	// printf("%lf\n", 3.4E+38 + 2123.5);
	// printf("%hhx %hX", 123, 123);

	//char *ptr = "Hello, world!";
	//ft_printf("Hello, world! = %23p\n", ptr);
	//printf("Hello, world! = %23p\n", ptr);
	//int *ptr2 = (int*)malloc(sizeof(int));
	//*ptr2 = 252;
	//ft_printf("252 = %-3pEND\n", ptr2);
	//unsigned int ui = 4294967295;

	ft_printf("%.5uend\n", 12445);
	printf("%.5uend\n", 12445);
	return (0);
}
