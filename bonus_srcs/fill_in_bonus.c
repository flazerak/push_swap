/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_in_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 02:28:09 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 14:28:06 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	is_in_stack(int cont, t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (cont == lst->content)
			return (1);
		lst = lst->next;
	}
	return (0);
}

void	check_dups(t_list *stack_a)
{
	int		cont;

	if (!stack_a || stack_a->next == NULL)
		return ;
	cont = stack_a->content;
	stack_a = stack_a->next;
	while (stack_a != NULL)
	{	
		if (is_in_stack(cont, stack_a))
		{
			free_stack(&stack_a);
			error_exit();
		}
		cont = stack_a->content;
		stack_a = stack_a->next;
	}
}

t_list	*fill_check_dup(char *str)
{
	char	**splt;
	t_list	*stack_a;
	t_list	*new;
	int		i;
	int		tmp;

	splt = ft_split(str, ' ');
	stack_a = NULL;
	i = -1;
	while (++i < countsplits(str, ' '))
	{
		tmp = ft_atoi(splt[i]);
		new = ft_lstnew(tmp);
		ft_lstadd_back(&stack_a, new);
	}
	ft_free(splt, countsplits(str, ' '));
	check_dups(stack_a);
	return (stack_a);
}

int	check_sorted(t_list *stack_a)
{
	if (!stack_a || stack_a->next == NULL)
		return (0);
	while (stack_a->next != NULL)
	{
		if (stack_a->content > (stack_a->next)->content)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	check_sorted2(t_list **stack_a, t_list **stack_b)
{
	if (*stack_b != NULL)
		ko_exit(stack_a, stack_b);
	if (check_sorted(*stack_a) == 1)
		ok_exit(stack_a, stack_a);
	else
		ko_exit(stack_a, stack_b);
}
