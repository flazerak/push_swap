/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:01:04 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 23:41:23 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write (1, "rr\n", 3);
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write (1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write (1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write (1, "rrr\n", 4);
}

void	rra_check_sorted_sort5(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	check_sorted(*stack_a);
	sort5(stack_a, stack_b);
}
