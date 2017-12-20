/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_unb.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 20:16:41 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 18:08:01 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_unb(int fd, char *p, va_list list)
{
	if ((*++p) == 'u')
	{
		ft_putunum_fd(fd, va_arg(list, uint64_t), 10);
		return (1);
	}
	return (0);
}
