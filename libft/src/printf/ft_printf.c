/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 19:15:58 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 18:14:15 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "f_printf.h"
#define NB_FUNCS 25

static void		fill_fn(int (**functions)(int, char *, va_list))
{
	functions[0] = print_char;
	functions[1] = print_nb;
	functions[2] = print_str;
	functions[3] = print_str_pad;
	functions[4] = print_hex;
	functions[5] = print_binary;
	functions[6] = print_nb_pad;
	functions[7] = print_unb_pad;
	functions[8] = print_float;
	functions[9] = print_unb;
}

void			ft_printf_pure_fd(int fd, char *fmt, va_list argp)
{
	int			(*functions[NB_FUNCS])(int, char *, va_list);
	int			i;
	int			custom_format;
	
	fill_fn(functions);
	while (*fmt)
	{
		i = -1;
		custom_format = 0;
		while (*fmt == '%' && ++i < NB_FUNCS)
		{
			custom_format = functions[i](fd, fmt, argp);
			if (custom_format)
			{
				fmt += custom_format;
				break ;
			}
		}
		if (!custom_format)
			ft_putchar_fd(fd, *fmt);
		fmt++;
	}
}

void		ft_printf_fd(int fd, char *fmt, ...)
{
	va_list argp;
	va_start(argp, fmt);
	ft_printf_pure_fd(fd, fmt, argp);
	va_end(argp);
}

void		ft_printf(char *fmt, ...)
{
	va_list argp;
	va_start(argp, fmt);
	ft_printf_pure_fd(1, fmt, argp);
	va_end(argp);
}