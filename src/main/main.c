/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 09:31:31 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 11:58:10 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <stdio.h>





int		main(void)
{
	setlocale(LC_CTYPE, "");
	pf(    "test %.3S\n", L"Héllo");
	printf("test %.3S\n", L"Héllo");
	printf("test: |%5S|\n", L"éé");
	printf("test: |%5S|\n", L"12");
}
