/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_float.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 20:16:41 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 16:28:16 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_float(int fd, char *p, va_list list)
{
	if ((*++p) == 'f')
	{
		ft_putfloat_fd(fd, va_arg(list, double), 3, 10);
		return (1);
	}
	return (0);
}
