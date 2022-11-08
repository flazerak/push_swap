/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:36:11 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 14:12:16 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	not_dig_not_space(char *args, int i)
{
	if (args[i] != '\0' && !ft_isdigit(args[i]) && \
	args[i] != ' ' && args[i] != '+' && args[i] != '-')
		error_exit();
}

void	check_valid_args(char *args)
{
	int	i;

	i = 0;
	while (i < ft_strlen(args))
	{
		if (args[i] == ' ')
			i = skip_c(args, ' ', i);
		not_dig_not_space(args, i);
		if (args[i] != '\0' && \
		(ft_isdigit(args[i]) || args[i] == '+' || args[i] == '-'))
		{
			if (args[i] == '+' || args[i] == '-')
			{
				if (args[i + 1] == '\0' || !ft_isdigit(args[i + 1]))
					error_exit();
					i++;
			}
			while (ft_isdigit(args[i]))
				i++;
			if (args[i] != '\0' && !ft_isdigit(args[i]) && args[i] != ' ')
				error_exit();
			i++;
		}
	}
}

void	free_stack(t_list **lst)
{
	t_list	*tmp;

	if (!lst || !(*lst))
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
