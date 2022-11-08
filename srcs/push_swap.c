/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:39:16 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 19:15:23 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	char	*tmp;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		exit(0);
	i = 0;
	tmp = NULL;
	stack_b = NULL;
	while (av[++i])
	{
		if (!av[i] || is_space(av[i]))
			error_exit();
		tmp = ft_strjoin(tmp, av[i]);
		tmp = ft_strjoin(tmp, " ");
	}
	check_valid_args(tmp);
	stack_a = fill_check_dup(tmp);
	free(tmp);
	check_sorted(stack_a);
	set_indexes(stack_a);
	sort(&stack_a, &stack_b);
	free_stack(&stack_a);
}
