/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map_print.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:01:14 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/02 12:50:52 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	map_print(t_map *map)
{
	t_list	*lst;
	t_entry	*tmp;

	lst = map->lst;
	ft_putstr("{\n");
	while (lst)
	{
		tmp = (t_entry *)lst->content;
		ft_putstr("	key: ");
		ft_putstr(tmp->key);
		ft_putstr(" ; value: ");
		ft_putstr(tmp->value);
		ft_putstr(lst->next ? "," : "");
		lst = lst->next;
	}
	ft_putstr("}\n");
}
