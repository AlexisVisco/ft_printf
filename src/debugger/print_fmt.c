/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_fmt.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 18:18:38 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 18:37:37 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_fmt(t_formatter *t)
{
	printf("t_formatter {\n");
	printf("  flags: %s,\n", t->flags);
	printf("  width: %i,\n", t->width);
	printf("  precision: %i,\n", t->precision);
	printf("  length: %s,\n", t->length);
	printf("  type: %c,\n", t->type);
	printf("  full_formatter: %s,\n", t->full_formatter);
	printf("  non_spec_arg: %c,\n", t->non_spec_arg);
	printf("  index: %i,\n", t->index);
	printf("  index_replace_end: %i,\n", t->index_replace_end);
	printf("  to_replace: %s\n", t->to_replace);
	printf("}\n");
}