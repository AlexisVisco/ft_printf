/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_wchar.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 19:44:15 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 21:06:59 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

static char *get_wchar_st(wchar_t arg, t_formatter *t)
{
	char *str;
	int len;

	if (arg == 0)
		return (ft_strdup(PRNT_NULL));
		str = malloc(sizeof(char) * (2));
	len = ft_wcharlen(arg);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = 0;
	ft_wchar_in_str(arg, str, 0);
	return (str);
}

void	get_wchar(t_formatter *t, va_list lst)
{
	wchar_t	arg;
	char	*str;

	str = get_wchar_st(arg, t);
	arg = va_arg(lst, wchar_t);
	str = get_wchar_st(arg, t);
	free(t->to_replace);
	t->to_replace = str;
	//todo wstr compute
}
