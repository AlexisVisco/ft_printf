/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   c_uintmax.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/21 09:09:01 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 10:31:34 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int16_t		len_uintmax(uintmax_t v, uint8_t base)
{
	int16_t ret;

	ret = 1;
	while (v /= base)
		++ret;
	return (ret);
}

int16_t		str_uintmax(char *dst, uintmax_t n, uint8_t base)
{
	int16_t	i;
	int16_t	x;
	static char	digits[37] = BASE;

	if (base > 36)
		return (0);
	i = len_uintmax(n, base);
	dst[(x = i)] = 0;
	x--;
	while (n)
	{
		dst[x--] = digits[n % base];
		n /= base;
	}
	return ((uint8_t)(i + 1));
}
