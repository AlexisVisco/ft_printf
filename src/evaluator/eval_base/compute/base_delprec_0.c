/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   base_delprec_0.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/02 20:45:07 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/02 20:49:37 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	base_delprec_0(t_formatter *t)
{
	char *str;

	free(t->to_replace);
	str = malloc(sizeof(char) * 1);
	str[0] = 0;
	t->to_replace = str;
}