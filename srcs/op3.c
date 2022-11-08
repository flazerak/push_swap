/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:57:24 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 23:41:41 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	write (1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	write (1, "rb\n", 3);
}

void	ra_sa(t_list **stack_a)
{
	ra(stack_a);
	sa(stack_a);
}

void	ra_check_sorted_sort5(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	check_sorted(*stack_a);
	sort5(stack_a, stack_b);
}
