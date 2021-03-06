/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   formatter.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 10:30:12 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/04 11:36:33 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

t_formatter	new_formatter(void)
{
	t_formatter fmt;

	fmt.flags[0] = 0;
	fmt.width = -1;
	fmt.precision = -1;
	fmt.is_width_first = 0;
	fmt.length[0] = 0;
	fmt.type = 0;
	fmt.full_formatter = NULL;
	fmt.non_spec_arg = 0;
	fmt.index = -1;
	fmt.index_replace_end = -1;
	fmt.to_replace = ft_strdup("(null)");
	return (fmt);
}

void		flush_formatter(t_formatter *t)
{
	free(t->full_formatter);
	free(t->to_replace);
}
