/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_unb_pad.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 10:14:03 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 18:14:45 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_unb_pad(int fd, char *p, va_list list)
{
	int			pad_size;
	uint64_t	s;
	int			diff;

	if ((*++p) == '*' && (*p != '\0' && *++p == 'u'))
	{
		pad_size = va_arg(list, int);
		s = va_arg(list, uint64_t);
		diff = pad_size - (math_uintlen(s, 10));
		ft_putnchar_fd(fd, ' ', diff);
		ft_putunum_fd(fd, s, 10);
		return (2);
	}
	return (0);
}
