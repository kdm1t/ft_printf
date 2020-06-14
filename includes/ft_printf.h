#ifndef UNTITLED_FT_PRINTF_H
#define UNTITLED_FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>

typedef struct    s_formatter
{
    va_list        *ap;
    char        *str;
    size_t        c;
    char        flags[6];
    char        *color;
    size_t        width;
    int            precision;
    char        length[3];
    char        specifier;
    int            baks;
}                t_form;

int ft_printf(const char *format, ...);

#endif //UNTITLED_FT_PRINTF_H