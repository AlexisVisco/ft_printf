/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   f_printf.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 14:33:19 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 18:14:22 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _F_PRINTF_H
# define _F_PRINTF_H
# include <stdarg.h>

int		print_binary(int fd, char *p, va_list list);
int		print_char(int fd, char *p, va_list list);
int 	print_hex(int fd, char *p, va_list list);
int		print_nb(int fd, char *p, va_list list);
int		print_str_pad(int fd, char *p, va_list list);
int		print_nb_pad(int fd, char *p, va_list list);
int		print_str(int fd, char *p, va_list list);
int		print_float(int fd, char *p, va_list list);
int		print_unb(int fd, char *p, va_list list);
int		print_unb_pad(int fd, char *p, va_list list);

void	ft_printf_pure_fd(int fd, char *fmt, va_list argp);
void	ft_printf_fd(int fd, char *fmt, ...);
void	ft_printf(char *fmt, ...);

#endif