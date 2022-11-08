/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:52:42 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 15:28:58 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	get_do_push(char *tmp, t_list **stack_a, t_list **stack_b)
{
	tmp = get_next_line(0);
	while (tmp)
	{
		do_push(tmp, stack_a, stack_b);
		free(tmp);
		tmp = get_next_line(0);
	}
}

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
	set_indexes(stack_a);
	get_do_push(tmp, &stack_a, &stack_b);
	check_sorted2(&stack_a, &stack_b);
}
