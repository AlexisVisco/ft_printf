/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 09:31:31 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/28 12:21:39 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <stdio.h>

int		main(void)
{
	const char *test = "Test : %#lx.\n";
    const int arg = 53223;
    const intmax_t t = (intmax_t)&arg;
    pf(test, (intmax_t)(&arg));
    printf(test, t);
    printf("Test : %p.\n", &arg);
}
