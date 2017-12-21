/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   extractor.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/21 20:20:55 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 20:21:13 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	extract_params(t_formatter *fmt, char *full)
{
	while (*full)
	{
		if (ft_strchr(FLAGS, *full))
			extract_flags(fmt, &full);
		else if (ft_isdigit(*full))
			extract_width(fmt, &full);
		else if (*full == '.')
			extract_precision(fmt, &full);
		else if (ft_strchr(LENGTH, *full))
			extract_length(fmt, &full);
		else
			full++;
	}
}
