/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_wstring.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/23 14:50:57 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 11:56:09 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_wstring(t_formatter *t, va_list lst)
{
	wchar_t *arg;
	
	printf("1\n");
	fflush(stdout);
	if (t->precision == -2 || t->width == -2)
		fill_dyn_val(t, lst);
	printf("2\n");
	fflush(stdout);
	arg = va_arg(lst, wchar_t *);
	printf("3\n");
	fflush(stdout);
	if (!arg)
		return ;
	printf("4\n");
	fflush(stdout);
	if (t->precision > 0 && ft_strlen(t->to_replace) > t->precision)
		wstr_precision(&arg, t);
	free(t->to_replace);
	t->to_replace = ft_wstr_to_str(arg);
	if (t->width > 0 && ft_strlen(t->to_replace) < t->width)
		str_padding(t);
}