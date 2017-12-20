/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map_unset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 13:57:00 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 16:45:03 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		map_unset(t_map *map, char *key)
{
	t_list	*lst;
	t_entry	*tmp;
	t_list	*prev;
	
    lst = map->lst;
	prev = NULL;
	while (lst)
	{
		tmp = (t_entry *)lst->content;
		if (tmp && ft_strequ(key, tmp->key))
		{
			free(tmp->value);
			free(tmp->key);
			if (prev)
				prev->next = lst->next;
			else if(!prev && lst->next)
				map->lst = lst->next;
			else
				map->lst = NULL;
			free(lst);
			lst = NULL;
			return 1;
		}
		prev = lst;
		lst = lst->next;
	}
	return 0;
}
