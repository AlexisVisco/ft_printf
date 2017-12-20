/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   new_formatter.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 10:30:12 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 18:38:20 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

t_formatter	*new_formater()
{
	t_formatter *fmt;

	fmt = (t_formatter *)malloc(sizeof(t_formatter));
	fmt->flags[0]     	  	= 0; 
	fmt->width				= -1;
	fmt->precision			= -1;
	fmt->length[0]			= 0;
	fmt->type				= 0;
	fmt->full_formatter		= NULL;
	fmt->non_spec_arg		= 0;
	fmt->index				= -1;
	fmt->index_replace_end	= -1;
	fmt->to_replace			= NULL;
	return (fmt);
}