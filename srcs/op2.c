/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:52:43 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 22:59:31 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//send top of B to top of A
void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	write (1, "pa\n", 3);
}

//send top of A to top of B
void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	write (1, "pb\n", 3);
}

void	sa(t_list **stack_a)
{
	swap(*stack_a);
	write (1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	swap(*stack_b);
	write (1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	write (1, "ss\n", 3);
}
