/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   extracter.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 10:02:28 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 15:34:11 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

static void	extract_it(t_list *lst, char **s)
{
	t_formatter	*fmt;
	char		*str;
	char		*full_fmt;
	int			inc;
	
	str = *s;
	fmt = new_formater();
	inc = extract_full(fmt, *s);
	full_fmt = fmt->full_formatter;
}

t_list		*extract_formatter(char *str)
{
	t_list	*list_formatter;
	char	*str_0;

	str_0 = str;
	list_formatter = NULL;
	while (*str)
	{
		if (*str == SYMBOL)
			extract_it(list_formatter, &str);
		str++;
	}
}