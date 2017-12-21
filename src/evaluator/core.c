/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   core.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 10:02:28 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 21:46:01 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

static void	call_formatter(char **s, int *i, t_formatter *fmt)
{
	char		*full_fmt;

	fmt->index = (*i);
	*i += extract_full(fmt, (*s) + (*i)); /*  /!\ /!\ /!\ /!\ disable /!\ /!\ /!\ /!\ */
	full_fmt = fmt->full_formatter;
	extract_params(fmt, full_fmt);
}

void		evaluator_core(char **str, va_list lst)
{
	t_formatter fmt;
	int			i;

	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] == SYMBOL)
		{
			fmt = new_formater();
			call_formatter(str, &i, &fmt);
			print_fmt(fmt);
			evaluator(str, &fmt, lst);
		}
		else
			i++;
	}
}