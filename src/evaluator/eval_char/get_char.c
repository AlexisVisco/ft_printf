/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_char.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 19:40:35 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/27 13:38:17 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_char(t_formatter *t, va_list lst)
{
	char	arg;
	char	*str;

	if (ft_strchr(t->length, 'l') || t->type == 'C')
		return (get_wchar(t, lst));
	if (t->non_spec_arg == 0)
		arg = va_arg(lst, int);
	free(t->to_replace);
	str = (char *)malloc(sizeof(char) * 2);
	str[1] = 0;
	str[0] = t->non_spec_arg != 0 ? t->non_spec_arg : arg;
	t->to_replace = str;
}