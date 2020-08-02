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

# define C_TYPE 1
# define S_TYPE 2
# define P_TYPE 3
# define D_TYPE 4
# define I_TYPE 5
# define O_TYPE 6
# define U_TYPE 7
# define X_JR_TYPE 8
# define X_TYPE 9
# define F_TYPE 10

# define PLUS_FLAG 1
# define MINUS_FLAG 2
# define SPACE_FLAG 4
# define HASH_FLAG 8
# define ZERO_FLAG 16

# define L_JR_LENGTH 1
# define L_LENGTH 2
# define LL_LENGTH 3
# define H_LENGTH 4
# define HH_LENGTH 5

typedef     struct  s_arg
{
    //flags
    short           flag;
    short           type;
    //width
    int             width;
    //precision
    int             precision;
    //length
    short           length;
}                   t_arg;

typedef     struct  s_format
{
    va_list         argc;
    // intmax_t        number;
    // uintmax_t       number_x;
    char            *format;
    int             i_symbol;
    t_arg           *current_arg;
}                   t_format;


int     ft_printf(const char *format, ...);
void	init_format(t_format *formater);
void	display_arg(t_format *formater);
void	parse_arg(t_format *formater);
int		is_type(char sym);
void	set_width(t_format *formater);
void	set_flag(t_format *formater);

#endif
