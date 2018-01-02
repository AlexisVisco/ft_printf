/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_string.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/23 14:45:00 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/02 13:36:55 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_string(t_formatter *t, va_list lst)
{
	char *arg;

	if (ft_strchr(t->length, 'l') || t->type == 'S')
		return (get_wstring(t, lst));
	if (t->precision == -2 || t->width == -2)
		fill_dyn_val(t, lst);
	arg = ft_strdup(va_arg(lst, char *));
	if (!arg)
		return ;
	free(t->to_replace);
	t->to_replace = arg;
	str_compute(t);
}
