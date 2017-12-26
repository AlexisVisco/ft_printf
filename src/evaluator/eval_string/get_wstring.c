/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_wstring.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/23 14:50:57 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 20:02:47 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_wstring(t_formatter *t, va_list lst)
{
	wchar_t *arg;
	
	if (t->precision == -2 || t->width == -2)
		fill_dyn_val(t, lst);
	arg = va_arg(lst, wchar_t *);
	if (!arg)
		return ;
	if (t->precision > 0 && ft_strlen(t->to_replace) > t->precision)
		wstr_precision(&arg, t);
	free(t->to_replace);
	t->to_replace = ft_wstr_to_str(arg);
	if (t->width > 0 && ft_strlen(t->to_replace) < t->width)
		str_padding(t);
}