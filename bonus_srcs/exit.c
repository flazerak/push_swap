/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:01:08 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 16:01:09 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	error_exit(void)
{
	write (1, "Error\n", 6);
	exit (1);
}

void	ko_exit(t_list **stack_a, t_list **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	write (1, "KO\n", 3);
	exit (1);
}

void	ok_exit(t_list **stack_a, t_list **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	write (1, "OK\n", 3);
	exit (0);
}
