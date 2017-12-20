/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin_multiple.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/26 21:41:12 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 09:58:08 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_multiple(char *str, ...)
{
	va_list	ap;
	char	*tmp;
	char	*cpy;

	va_start(ap, str);
	while (42)
	{
		tmp = va_arg(ap, char *);
		if (!tmp)
			break ;
		cpy = ft_strdup(str);
		free(str);
		str = ft_strjoin(cpy, tmp);
		free(cpy);
	}
	va_end(ap);
	return (str);
}
