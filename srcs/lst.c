/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:38:10 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 22:47:40 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_elt;

	new_elt = malloc(sizeof(t_list));
	if (!new_elt)
		return (NULL);
	new_elt->content = content;
	new_elt->index = 0;
	new_elt->next = NULL;
	return (new_elt);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*lst_last(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_list	*lst_bef_last(t_list *lst)
{
	while (lst && lst->next && lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}

// void    printf_list(t_list  **lst)
// {
//     t_list	*tmp;

// 	if (!lst || !*lst)
// 		return;
// 	tmp = *lst;
// 	while (tmp)
//     {
//         printf("content : %d, index : %d \n", tmp->content, tmp->index);
// 		tmp = tmp->next;
//     }
// }