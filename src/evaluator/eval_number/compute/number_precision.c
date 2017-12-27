/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   number_precision.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 11:41:09 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/27 12:59:27 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	number_precision(t_formatter *t)
{
	char	*str;
	char	*pad;
	int		diff;

	diff = t->precision - ft_strlen(t->to_replace);
	pad = ft_str_repeatm('0', diff);
	str = ft_strappend_at(0, t->to_replace, pad);
	free(t->to_replace);
	free(pad);
	t->to_replace = str;
}