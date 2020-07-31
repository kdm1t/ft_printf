#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "../libft/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>



//mandatory part:
    //  type: csp
    //  type: diouxX - length: hh, h, l and ll.
    //  type: f - length: l, L
    //  You must manage %%
    //  You must manage the flags #0-+ and space
    //  You must manage the minimum field-width
    //  You must manage the precision
    //  Your function will be called ft_printf and will be prototyped similarly to printf.
    //  You won’t do the buffer management in the printf function.
//bonus:
    //  More detailed conversions management: e and g. Be careful, your L flag must works with both of them to validate this bonus.
    //  More detailed flags management: *, $ and ’.
    //  Non-existing flags management: %b to print in binary, %r to print a string of nonprintable characters, %k to print a date in any ordinary ISO format etc.
    //  Management of alter tools for colors, fd or other fun stuff like that :)

//%[parameter][flags][width][.precision][length]type
typedef     struct  s_arg
{
    //flags
    short           f_plus;
    short           f_minus;
    short           f_space;
    short           f_hash;
    short           f_zero;
    //width
    int             width;
    //precision
    int             precision;
    //length
    short           l;
    short           ll;
    short           h;
    short           hh;
}                   t_arg;

typedef     struct  s_format
{
    va_list         argc;
    // intmax_t        number;
    // uintmax_t       number_x;
    char            *format;
    int             i_symbol;
    t_arg           current_arg;
}                   t_format;


int     ft_printf(const char *format, ...);
void	init_format(t_format *formater);
void	display_arg(t_format *formater);
void	parse_arg(t_format *formater);
int		is_type(char sym);

#endif
