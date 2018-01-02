/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_pointer.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/28 11:50:46 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/02 13:36:14 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_pointer(t_formatter *t, va_list lst)
{
	uintmax_t	pointer;
	char		*str;

	fill_dyn_val(t, lst);
	pointer = va_arg(lst, uintmax_t);
	str = malloc(sizeof(char) * 256);
	str_uintmax(str, pointer, 16, BASE);
	free(t->to_replace);
	t->to_replace = str;
	base_hash(t);
	pointer_compute(t);
}
