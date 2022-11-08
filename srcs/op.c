/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:38:46 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 01:51:25 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Pushes the top element of the first stack to the top of the other stack.
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

// Swaps top 2 elements of a stack. Do  nada if one or no elements
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

//rotate: The top element of the stack is sent to the bottom
void	rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *lst;
	*lst = (*lst)->next;
	last = lst_last(*lst);
	tmp->next = NULL;
	last->next = tmp;
}

//  rev_rotate: Brings the bottom element of a stack to the top.
void	reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*before_last;

	last = lst_last(*lst);
	before_last = lst_bef_last(*lst);
	tmp = *lst;
	*lst = last;
	(*lst)->next = tmp;
	before_last->next = NULL;
}
