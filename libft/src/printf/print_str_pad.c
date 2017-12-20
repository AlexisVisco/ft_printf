/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_str_pad.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 10:14:03 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 16:23:03 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_str_pad(int fd, char *p, va_list list)
{
	int		pad_size;
	char	*s;
	int		diff;

	if ((*++p) == '*' && (*p != '\0' && *++p == 's'))
	{
		pad_size = va_arg(list, int);
		s = va_arg(list, char *);
		diff = pad_size - (int)ft_strlen(s);
		ft_putnchar_fd(fd, ' ', diff);
		ft_putstr_fd(fd, s);
		return (2);
	}
	return (0);
}
