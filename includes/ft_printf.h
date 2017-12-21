/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 09:32:20 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 21:41:49 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include "libft.h"
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>

# define C_S			"sSpdDioOuUxXcC"
# define STR_S			"sS"
# define CHAR_S			"cC"
# define BASE_S			"oOxX"
# define NUMBER_S		"dDiuU"
# define POINTER_S		"p"
# define BEFORE_C_S		"#0-+ hljz.123456789"
# define FLAGS			"#0-+ "
# define LENGTH			"hljz"
# define SYMBOL			'%'
# define BASE			"0123456789abcdefghijklmnopqrstuvwxyz"
# define BASE_CAPS		"0123456789ABCDEFGHIJKLMNOPQRSTUVWZYZ"

typedef struct	s_formatter
{
	char		flags[6];
	int32_t		width;
	int32_t		precision;
	char		length[3];
	char		type;
	char		*full_formatter;
	char		non_spec_arg;
	int32_t		index;
	int32_t		index_replace_end;
	char		*to_replace;
}				t_formatter;

/*
** EVALUATOR
*/
void			evaluator_core(char **str, va_list lst);
void			evaluator(char **str, t_formatter *fmt, va_list lst);

/*
** PARSER
*/
int				extract_full(t_formatter *fmt, char *s);
void			extract_flags(t_formatter *fmt, char **str);
void			extract_precision(t_formatter *fmt, char **str);
void   			extract_length(t_formatter *fmt, char **str);
void    		extract_width(t_formatter *fmt, char **str);
void			extract_params(t_formatter *fmt, char *full);

/*
** INITER
*/
t_formatter		new_formater();

/*
** UTIL
*/
char			*ft_strcat_ch(char *dest, const char c);
char			*ft_strrep_first_aft(char *,char *, char *, int);

/*
** DEBUGGER
*/
void			print_fmt(t_formatter t);

/*
** CONVERTER
*/
int16_t			len_intmax(intmax_t v, uint8_t base);
int16_t			str_intmax(char *dst, intmax_t v, uint8_t base);
int16_t			len_uintmax(uintmax_t v, uint8_t base);
int16_t			str_uintmax(char *dst, uintmax_t v, uint8_t base);

/*
** PRINTF
*/
int				fpf(int fd, const char *format, ...);
int				pf(const char *format, ...);

#endif
