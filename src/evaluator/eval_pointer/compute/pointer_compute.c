/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pointer_compute.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/28 12:28:08 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/28 13:45:02 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

# define P_HAS_PRECISION ((t->precision >= 0 && t->precision >\
ft_strlen(t->to_replace)))
# define P_HAS_ZERO ((ft_strchr(t->flags, '0') && !ft_strchr(t->flags, '-')\
&& !has_prec))

void	pointer_compute(t_formatter *t)
{
	int	has_prec;
	
	has_prec = P_HAS_PRECISION;
	if (has_prec)
		number_precision(t);
	if (P_HAS_ZERO)
		base_zero(t);
	if ((!P_HAS_ZERO || ft_strchr(t->flags, '-')))
		if (t->width > 0 && ft_strlen(t->to_replace) < t->width)
			str_padding(t);
}