#include "../includes/ft_printf.h"

int     ft_printf(const char *format, ...) {
    t_format    formater;

    va_start(formater.argc, format);

    formater.format = (char *)format;
    formater.i_symbol = 0;

    while (formater.format[formater.i_symbol] != '\0') {
        if (formater.format[formater.i_symbol] == '%') {
            if (formater.format[formater.i_symbol + 1] == '%') {
                ft_putchar('%');
            } else {

            }
        } else {
            ft_putchar(formater.format[formater.i_symbol]);
        }
        formater.i_symbol++;
    }

    va_end(formater.argc);
    return (0);
}
