/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:23:58 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 02:17:36 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push(t_list **lst1, t_list **lst2)
{
	t_list	*tmp;

	if (lst1 == NULL || *lst1 == NULL)
		return ;
	tmp = (*lst1)->next;
	(*lst1)->next = *lst2;
	*lst2 = *lst1;
	*lst1 = tmp;
}

void	swap(t_list *lst)
{
	int	tmp;

	if (lst == NULL || lst->next == NULL)
		return ;
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
	tmp = lst->index;
	lst->index = lst->next->index;
	lst->next->index = tmp;
}

void	rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	if (lst == NULL || *lst == NULL)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	last = lst_last(*lst);
	tmp->next = NULL;
	last->next = tmp;
}

void	reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*before_last;

	if (lst == NULL || *lst == NULL)
		return ;
	last = lst_last(*lst);
	before_last = lst_bef_last(*lst);
	tmp = *lst;
	*lst = last;
	(*lst)->next = tmp;
	before_last->next = NULL;
}
