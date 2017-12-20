/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   extracter.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 10:02:28 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 22:10:48 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

static void	extract_params(t_formatter *fmt, char *full)
{
	printf("char %s\n", full);
	fflush(stdout);
	while (*full)
	{
		if (ft_strchr(FLAGS, *full))
		{
			printf("J'extracte les flags\n");
			fflush(stdout);
			extract_flags(fmt, &full);
		}
		else if (ft_isdigit(*full))
		{
			printf("J'extracte width\n");
			fflush(stdout);
			extract_width(fmt, &full);
		}
		else if (*full == '.')
		{
			printf("J'extracte les precision\n");
			fflush(stdout);
			extract_precision(fmt, &full);
		}
		else if (ft_strchr(LENGTH, *full))
		{
			printf("J'extracte les length\n");
			fflush(stdout);
			extract_length(fmt, &full);
		}
		else
			full++;
	}
}

static void	extract_it(t_list *lst, char **s)
{
	t_formatter	fmt;
	char		*str;
	char		*full_fmt;
	int			inc;
	
	str = *s;
	fmt = new_formater();
	inc = extract_full(&fmt, *s);
	ft_printf("%s\n", fmt.full_formatter);
	fflush(stdout);
	full_fmt = fmt.full_formatter;
	extract_params(&fmt, full_fmt);
	print_fmt(fmt);
	*s += inc;
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
		else
		{
			printf("%c\n", *str);
			str++;
		}
	}
	return (NULL);
}