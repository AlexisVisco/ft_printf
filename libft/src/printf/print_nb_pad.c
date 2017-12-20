/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_nb_pad.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 10:14:03 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 18:12:25 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_nb_pad(int fd, char *p, va_list list)
{
	int		pad_size;
	int64_t	s;
	int		diff;

	if ((*++p) == '*' && (*p != '\0' && *++p == 'i'))
	{
		pad_size = va_arg(list, int);
		s = va_arg(list, int64_t);
		diff = pad_size - (math_intlen(s, 10) + (s < 0 ? 1 : 0));
		ft_putnchar_fd(fd, ' ', diff);
		ft_putnum_fd(fd, s, 10);
		return (2);
	}
	return (0);
}
