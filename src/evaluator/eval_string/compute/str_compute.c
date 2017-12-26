/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   str_compute.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/23 14:53:34 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/24 20:38:11 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	str_compute(t_formatter *t)
{
	if (t->precision > 0 && ft_strlen(t->to_replace) > t->precision)
		str_precision(t);
	if (t->width > 0 && ft_strlen(t->to_replace) < t->width)
		str_padding(t);
}