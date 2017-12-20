/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strreplace.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/12 14:16:08 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 10:09:19 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strreplace(char *search, char *replace, char *subject)
{
	char *result;
	char *tmp;
	
	result = NULL;
	while (ft_strstr(result, search))
	{
		tmp = result;
		result = ft_strreplace_first(search, result == 0 ? subject : replace, result);
		if (tmp)
			free(tmp);
	}
	return (result);
}
