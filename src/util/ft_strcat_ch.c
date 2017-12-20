/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat_ch.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 13:11:44 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 15:14:39 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strcat_ch(char *dest, const char c)
{
	int from;

	from = ft_strlen_classic(dest);
	dest[from] = c;
	dest[from + 1] = '\0';
	return (dest);
}
