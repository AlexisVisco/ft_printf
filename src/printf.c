/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/21 20:07:05 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 21:35:30 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

static int	core_pf(int fd, const char *format, va_list lst)
{
	char *dup_fmt;

	dup_fmt = ft_strdup(format);
	evaluator_core(&dup_fmt, lst);
	return (write(fd, dup_fmt, ft_strlen(dup_fmt)));
}

int		fpf(int fd, const char *format, ...)
{
	va_list	ap;
	int		write;
	va_start(ap, format);
	write = core_pf(fd, format, ap);
	va_end(ap);
	return (write);
}

int		pf(const char *format, ...)
{
	va_list	ap;
	int		write;
	va_start(ap, format);
	write = core_pf(1, format, ap);
	va_end(ap);
	return (write);
}