/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:39:35 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 23:41:06 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort3(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		sort4(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		sort5(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) >= 5)
		sort_radix(stack_a, stack_b);
}

void	sort3(t_list **lst)
{
	if ((*lst)->content == get_min(*lst))
	{
		if ((((*lst)->next->index) > ((*lst)->index)) || \
		(((*lst)->next->index) > ((*lst)->next->next->index)))
		{
			rra(lst);
			sa(lst);
		}
	}
	else if (((*lst)->index < (*lst)->next->index) || \
	((*lst)->index < (*lst)->next->next->index))
	{
		if ((*lst)->next->content == get_min(*lst))
			sa(lst);
		else
			rra(lst);
	}
	else
	{
		if ((*lst)->next->content == get_min(*lst))
			ra(lst);
		else
			ra_sa(lst);
	}
}

void	sort4(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->content == get_min(*stack_a))
	{
		pb(stack_a, stack_b);
		sort3(stack_a);
		pa(stack_a, stack_b);
	}
	else if ((*stack_a)->next->content == get_min(*stack_a))
	{
		ra(stack_a);
		check_sorted(*stack_a);
		sort4(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->content == get_min(*stack_a))
	{
		ra(stack_a);
		ra(stack_a);
		check_sorted(*stack_a);
		sort4(stack_a, stack_b);
	}
	else
	{
		rra(stack_a);
		check_sorted(*stack_a);
		sort4(stack_a, stack_b);
	}
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->index == 1)
	{
		pb(stack_a, stack_b);
		sort4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else if ((*stack_a)->next->index == 1)
		ra_check_sorted_sort5(stack_a, stack_b);
	else if ((*stack_a)->next->next->index == 1)
	{
		ra(stack_a);
		ra_check_sorted_sort5(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->index == 1)
	{
		rra(stack_a);
		rra_check_sorted_sort5(stack_a, stack_b);
	}
	else
		rra_check_sorted_sort5(stack_a, stack_b);
}
