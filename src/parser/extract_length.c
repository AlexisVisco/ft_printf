/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   extract_length.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 13:18:51 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 14:53:37 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void    extract_length(t_formatter *fmt, char **str)
{
    while (**str)
    {
        if (ft_strnstr(*str, "hh", 2) || ft_strnstr(*str, "ll", 2))
            ft_strcpy(fmt->length, (*str[0] == 'h' ? "hh" : "ll")) && (*str)++;
        else if (ft_strchr(LENGTH, **str))
            (fmt->length[0] = **str) && (fmt->length[1] = **str);
		(*str)++;
    }
}