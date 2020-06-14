#ifndef UNTITLED_FT_PRINTF_H
#define UNTITLED_FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct    s_format
{
    //parameters
    va_list        *params;
    //format
    char        *format;
    char        *out;
    size_t        amount_params;
    char        flags[6];
    char        *color;
    size_t        width;
    int            precision;
    char        length[3];
    char        type;
    int            baks;
}                t_format;

//igor
t_format parser(char* format, va_list *params);
//dima

int ft_printf(const char *format, ...);

#endif //UNTITLED_FT_PRINTF_H