/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_val.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 10:41:46 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/27 10:44:33 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void get_val(t_formatter *t, intmax_t *val, va_list lst)
{
	if (ft_strequ(t->length, "z"))
		*val = (intmax_t)va_arg(lst, size_t);
	else if (ft_strequ(t->length, "j"))
		*val = va_arg(lst, intmax_t);
	else if (ft_strequ(t->length, "ll"))
		*val = (intmax_t)va_arg(lst, long long);
	else if (ft_strequ(t->length, "l"))
		*val = (intmax_t)va_arg(lst, long);
	else if (ft_strequ(t->length, "h"))
		*val = (intmax_t)(unsigned short)va_arg(lst, int);
	else if (ft_strequ(t->length, "hh"))
		*val = (intmax_t)(unsigned char)va_arg(lst, int);
	else
		*val = (intmax_t)va_arg(lst, int);
}