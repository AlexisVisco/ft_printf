/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 09:31:31 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 21:44:25 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	replace_ref(char *s, char *r, char **ref)
{
	char *tmp;
	tmp = ft_strreplace_first("world", "tree", *ref + 6);
}

int		main(void)
{
	pf("test: %# hhi 2");
}
