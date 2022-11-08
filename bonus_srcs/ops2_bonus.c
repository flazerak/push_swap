/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops2_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:54:28 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 02:17:51 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}

void	free_exit(t_list **stack_a, t_list **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	error_exit();
}
