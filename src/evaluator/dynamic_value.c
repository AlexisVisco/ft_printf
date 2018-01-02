/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   dynamic_value.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 11:14:17 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/02 13:37:23 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	fill_dyn_val(t_formatter *t, va_list lst)
{
	if (t->is_width_first == 1 && t->width == -2)
	{
		t->width = va_arg(lst, int32_t);
		t->width = t->width < 0 ? 0 : t->width;
	}
	else if (t->is_width_first == -1 && t->precision == -2)
	{
		t->precision = va_arg(lst, int32_t);
		t->precision = t->precision < 0 ? 0 : t->precision;
	}
	if (t->width == -2)
		t->width = va_arg(lst, int32_t);
	else if (t->precision == -2)
		t->precision = va_arg(lst, int32_t);
	t->width = t->width < 0 ? 0 : t->width;
	t->precision = t->precision < 0 ? 0 : t->precision;
}
