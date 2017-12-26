/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   extract_precision.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 14:29:42 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/25 11:22:06 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	extract_precision(t_formatter *fmt, char **str)
{
	char	precision[11];
	uint8_t	i;

	precision[(i = 0)] = 0;
	if (**str != '.')
		return ;
	(*str)++;
	if (**str == '*')
    {
        fmt->precision = -2;
		fmt->is_width_first = fmt->is_width_first == 1 ? 1 : -1;
		(*str)++;
        return ;
    }
	if (!ft_isdigit(**str))
	{
		precision[0] = '0';
		precision[1] = 0;
	}
	else
	{
		while (**str && ft_isdigit(**str))
			*str += (i < 10 ? !!(precision[i++] = **str) : 1);
		precision[i] = 0;
	}
	if (precision[0])
		fmt->precision = ft_atoi(precision);	
}