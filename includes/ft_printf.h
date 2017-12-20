/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 09:32:20 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 18:39:15 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include "libft.h"
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

# define C_S "sSpdDioOuUxXcC"
# define BEFORE_C_S "#0-+ hljz.123456789"
# define FLAGS "#0-+ "
# define LENGTH "hljz"
# define SYMBOL '%'

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

void			extract_flags(t_formatter *fmt, char **str);
void			extract_precision(t_formatter *fmt, char **str);
void   			extract_length(t_formatter *fmt, char **str);
int				extract_full(t_formatter *fmt, char *s);
void    		extract_width(t_formatter *fmt, char **str);
t_list			*extract_formatter(char *str);

t_formatter		*new_formater();

char			*ft_strcat_ch(char *dest, const char c);

void			print_fmt(t_formatter *t);
#endif
