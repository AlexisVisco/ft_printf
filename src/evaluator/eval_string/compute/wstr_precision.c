/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   wstr_precision.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 11:15:44 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 11:17:47 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	wstr_precision(wchar_t **w, t_formatter *t)
{
	wchar_t *tmp;

	tmp = ft_wstrsubpf(*w, t->precision);
	*w = tmp;
}