/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   lst_delete.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:47:57 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 10:05:49 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	lst_delete(t_list **list, void (*del)(void *, size_t s))
{
	t_list	*current;

	if (list)
	{
		current = *list;
		while (current)
		{
			if (del)
				(*del)(current->content, current->content_size);
			free(current);
			current = current->next;
		}
	}
	*list = NULL;
}

void	lst_delete_free(t_list **list, void (*del)(void *, size_t s))
{
	t_list	*current;

	if (list)
	{
		current = *list;
		while (current)
		{
			if (del)
				(*del)(current->content, current->content_size);
			if (current->content)
				free(current->content);
			free(current);
			current = current->next;
		}
	}
	*list = NULL;
}
