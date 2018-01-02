/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   extract_full.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 12:52:59 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/02 13:22:04 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int		extract_full(t_formatter *fmt, char *s)
{
	int i;

	i = 1;
	while (s[i])
	{
		if (ft_strchr(C_S, s[i]))
		{
			fmt->type = s[i];
			fmt->full_formatter = ft_strsub(s, 0, i + 1);
			break ;
		}
		else if (!ft_strchr(BEFORE_C_S, s[i]))
		{
			fmt->type = 'c';
			fmt->non_spec_arg = s[i];
			fmt->full_formatter = ft_strsub(s, 0, i + 1);
			break ;
		}
		i++;
	}
	return (i + 1);
}
