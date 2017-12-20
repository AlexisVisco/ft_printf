/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/10 11:17:32 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 09:53:26 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	int		i;
	size_t	newlen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen || len > slen || len > slen - start)
		return (NULL);
	i = start;
	newlen = -1;
	while (++newlen < len && s[i])
		i++;
	if (!(str = malloc(sizeof(char) * (newlen + 1))))
		return (NULL);
	str[newlen] = '\0';
	i = start;
	newlen = -1;
	while (++newlen < len && s[i])
	{
		str[newlen] = s[i];
		i++;
	}
	return (str);
}
