/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:13:27 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/25 15:31:18 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include "gnl/get_next_line.h"

typedef struct s_list {
	int				index;
	int				content;
	struct s_list	*next;
}	t_list;

int		ft_isdigit(int c);
int		is_space(char *str);
int		ft_strlen(char *s);
char	*ft_strdup(char *s);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		ft_atoi(char *str);
char	*ft_strjoin(char *s1, char *s2);
int		countsplits(char *s, char c);
void	*ft_free(char **p, int j);
int		skip_c(char *s, char c, int i);
char	**ft_malloc(char *s, char c);
char	**ft_split(char *s, char c);
int		ft_strcmp(char *s1, char *s2);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*lst_last(t_list *lst);
t_list	*lst_bef_last(t_list *lst);
void	push(t_list **lst1, t_list **lst2);
void	swap(t_list *lst);
void	rotate(t_list **lst);
void	reverse_rotate(t_list **lst);
void	error_exit(void);
void	not_dig_not_space(char *args, int i);
void	check_valid_args(char *args);
void	free_stack(t_list **lst);
void	ss(t_list **stack_a, t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	free_exit(t_list **stack_a, t_list **stack_b);
int		get_min(t_list *lst);
void	ft_init(t_list **tmp, t_list **max, int *min, t_list *lst);
void	set_indexes(t_list *lst);
void	do_push(char *str, t_list **stack_a, t_list **stack_b);
int		is_in_stack(int cont, t_list *lst);
void	check_dups(t_list *stack_a);
t_list	*fill_check_dup(char *str);
int		check_sorted(t_list *stack_a);
void	ko_exit(t_list **stack_a, t_list **stack_b);
void	ok_exit(t_list **stack_a, t_list **stack_b);
void	check_sorted2(t_list **stack_a, t_list **stack_b);
void	get_do_push(char *tmp, t_list **stack_a, t_list **stack_b);

#endif
