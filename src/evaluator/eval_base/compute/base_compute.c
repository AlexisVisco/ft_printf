/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   base_compute.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 11:15:54 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/27 13:24:42 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

# define HAS_PRECISION ((t->precision >= 0 && t->precision >\
ft_strlen(t->to_replace)))
# define HAS_ZERO ((ft_strchr(t->flags, '0') && !ft_strchr(t->flags, '-')\
&& !has_prec))

void	base_compute(t_formatter *t)
{
	int	has_prec;
	
	has_prec = HAS_PRECISION;
	if (has_prec)
		number_precision(t);
	if (ft_strchr(t->flags, '#'))
		base_hash(t);
	if (HAS_ZERO)
		base_zero(t);
	if ((!HAS_ZERO || ft_strchr(t->flags, '-')))
		if (t->width > 0 && ft_strlen(t->to_replace) < t->width)
			str_padding(t);
}