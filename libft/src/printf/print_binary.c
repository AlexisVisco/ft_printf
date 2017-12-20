/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_binary.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 10:32:07 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 16:51:44 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_binary(int fd, char *p, va_list list)
{
	if ((*++p) == 'b')
	{
		ft_putunum_fd(fd, va_arg(list, uint64_t), 2);
		return (1);
	}
	return (0);
}
