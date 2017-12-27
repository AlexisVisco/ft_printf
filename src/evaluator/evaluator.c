/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   evaluator.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/21 20:18:01 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/27 12:00:19 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void evaluate(char **str, void (*fn)(), t_formatter *fmt, va_list lst)
{
	char *to_free;
	char *tmp;
	to_free = *str;
	fn(fmt, lst);
	tmp = ft_strrep_first_aft(fmt->full_formatter, fmt->to_replace, *str, fmt->index);
	fflush(stdout);
	fmt->index_replace_end = fmt->index + ft_strlen(fmt->to_replace);
	free(to_free);
	str[0] = tmp;
}

void evaluator(char **str, t_formatter *fmt, va_list lst)
{
	if (ft_strchr(STR_S, fmt->type))
		evaluate(str, get_string, fmt, lst);
	else if (ft_strchr(CHAR_S, fmt->type))
		evaluate(str, get_char, fmt, lst);
	else if (ft_strchr(BASE_SX, fmt->type))
		evaluate(str, get_hex, fmt, lst);
	else if (ft_strchr(BASE_SO, fmt->type))
		evaluate(str, get_oct, fmt, lst);
}