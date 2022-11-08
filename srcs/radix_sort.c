/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:19:48 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 23:27:28 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	len_bin(int max)
{
	int	i;

	i = 0;
	while (max)
	{
		max >>= 1;
		i++;
	}
	return (i);
}

void	sort_radix(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	l;
	int	l_bin;

	i = -1;
	l = ft_lstsize(*stack_a);
	l_bin = len_bin(l);
	while (++i < l_bin)
	{
		j = -1;
		while (++j < l)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
	}
}
