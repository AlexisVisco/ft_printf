/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   number_compute.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/28 10:08:12 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/02 13:33:11 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

#define N_PRE_CHILD (t->precision > 0 && t->precision)
#define N_ZERO_CHILD (ft_strchr(t->flags, '0') && !ft_strchr(t->flags, '-'))
#define N_HAS_PRECSON ((N_PRE_CHILD >= ft_strlen(t->to_replace)))
#define N_HAS_ZERO ((N_ZERO_CHILD && !has_precision))

void	number_compute(t_formatter *t)
{
	int has_precision;

	has_precision = N_HAS_PRECSON;
	if (has_precision)
		number_precision(t);
	if (ft_strchr(t->flags, ' ') && !ft_strchr(t->flags, '+'))
		number_space(t);
	if (N_HAS_ZERO)
		number_zero(t);
	if (ft_strchr(t->flags, '+'))
		number_plus(t);
	if ((!N_HAS_ZERO || ft_strchr(t->flags, '-')))
		if (t->width > 0 && ft_strlen(t->to_replace) < t->width)
			str_padding(t);
}
