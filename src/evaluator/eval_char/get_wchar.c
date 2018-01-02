/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_wchar.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 19:44:15 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/02 13:30:58 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_wchar(t_formatter *t, va_list lst)
{
	wchar_t	arg;
	int32_t	len;
	char	*str;

	arg = va_arg(lst, wchar_t);
	free(t->to_replace);
	len = ft_wcharlen(arg);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = 0;
	ft_wchar_in_str(arg, str, 0);
	t->to_replace = str;
}
