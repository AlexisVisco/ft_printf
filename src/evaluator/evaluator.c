/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   evaluator.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/21 20:18:01 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/23 19:52:53 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	evaluator(char **str, t_formatter *fmt, va_list lst)
{
	char	*to_free;
	char	*tmp;

	if (fmt->type == 's' || fmt->type == 'S')
	{
		to_free = *str;
		get_string(fmt, lst);
		tmp = ft_strrep_first_aft(fmt->full_formatter, fmt->to_replace, *str, fmt->index);
		fflush(stdout);
		fmt->index_replace_end = fmt->index + ft_strlen(fmt->to_replace);
		free(to_free);
		str[0] = tmp;
	}
}