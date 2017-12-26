/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 09:32:20 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 20:00:16 by aviscogl    ###    #+. /#+    ###.fr     */
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
# define BEFORE_C_S		"#0-+* hljz.123456789"
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
	int32_t		is_width_first;
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
void			str_compute(t_formatter *t);
void			str_precision(t_formatter *t);
void			wstr_precision(wchar_t **w, t_formatter *t);
void			str_padding(t_formatter *t);

void			get_string(t_formatter *t, va_list lst);
void			get_wstring(t_formatter *t, va_list lst);
void			get_char(t_formatter *t, va_list lst);
void			get_wchar(t_formatter *t, va_list lst);

void			evaluator_core(char **str, va_list lst);
void			evaluator(char **str, t_formatter *fmt, va_list lst);
void			fill_dyn_val(t_formatter *t, va_list lst);

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
t_formatter		new_formatter();
void			flush_formatter(t_formatter *t);

/*
** UTIL
*/
int				ft_wcharlen(wchar_t wchar);
size_t			ft_byte_wstrlen(wchar_t *ws);
size_t			ft_wstrlen(wchar_t *ws);
wchar_t			*ft_wstrsubpf(wchar_t *ws, int end);
char			*ft_strappend_at(int n, char *src, char *add);
char			*ft_strappend_atc(int n, char *src, char c);
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
int				ft_wchar_in_str(wchar_t wchar, char *fresh, int i);
char			*ft_wstr_to_str(wchar_t *ws);

/*
** PRINTF
*/
int				fpf(int fd, const char *format, ...);
int				pf(const char *format, ...);

#endif
