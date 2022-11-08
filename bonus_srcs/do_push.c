/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:18:37 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 15:30:25 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	do_push(char *str, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp(str, "pa\n") == 0)
		push(stack_b, stack_a);
	else if (ft_strcmp(str, "pb\n") == 0)
		push(stack_a, stack_b);
	else if (ft_strcmp(str, "sa\n") == 0)
		swap(*stack_a);
	else if (ft_strcmp(str, "sb\n") == 0)
		swap(*stack_b);
	else if (ft_strcmp(str, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(str, "ra\n") == 0)
		rotate(stack_a);
	else if (ft_strcmp(str, "rb\n") == 0)
		rotate(stack_b);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(str, "rra\n") == 0)
		reverse_rotate(stack_a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		reverse_rotate(stack_b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else
		free_exit(stack_a, stack_b);
}
