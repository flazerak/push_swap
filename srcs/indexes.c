/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexes.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:24:50 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 21:59:49 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_list *lst)
{
	int	min;

	min = lst->content;
	while (lst)
	{
		if (min > lst->content)
			min = lst->content;
		lst = lst->next;
	}
	return (min);
}

void	ft_init(t_list **tmp, t_list **max, int *min, t_list *lst)
{
		*tmp = lst;
		*min = get_min(lst);
		*max = NULL;
}

void	set_indexes(t_list *lst)
{
	t_list	*tmp;
	t_list	*max;
	int		min;
	int		len;

	len = ft_lstsize(lst) + 1;
	while (len-- > 0)
	{
		ft_init(&tmp, &max, &min, lst);
		while (tmp)
		{
			if (tmp->content == get_min(lst) && tmp->index == 0)
				tmp->index = 1;
			if (tmp->content > min && tmp->index == 0)
			{
				min = tmp->content;
				max = tmp;
				tmp = lst;
			}
			else
				tmp = tmp->next;
		}
		if (max != NULL)
			max->index = len;
	}
}
