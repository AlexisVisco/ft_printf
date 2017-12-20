/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_char.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 20:26:22 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 15:22:11 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_char(int fd, char *p, va_list list)
{
	if ((*++p) == 'c')
	{
		ft_putchar_fd(fd, va_arg(list, int));
		return (1);
	}
	return (0);
}
