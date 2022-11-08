/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:40:43 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 23:50:24 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

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
void	not_dig_not_space(char *args, int i);
int		countsplits(char *s, char c);
void	*ft_free(char **p, int j);
int		skip_c(char *s, char c, int i);
char	**ft_malloc(char *s, char c);
char	**ft_split(char *s, char c);
void	check_valid_args(char *args);
void	error_exit(void);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*lst_last(t_list *lst);
t_list	*lst_bef_last(t_list *lst);
void	free_stack(t_list **lst);
// void    printf_list(t_list  **lst);
void	check_dups(t_list *stack_a);
t_list	*fill_check_dup(char *str);
int		is_in_stack(int cont, t_list *lst);
void	check_sorted(t_list *stack_a);
void	push(t_list **lst1, t_list **lst2);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	swap(t_list *lst);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	rotate(t_list **lst);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	ra_sa(t_list **stack_a);
void	rr(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **lst);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	ra_check_sorted_sort5(t_list **stack_a, t_list **stack_b);
void	rra_check_sorted_sort5(t_list **stack_a, t_list **stack_b);
int		get_min(t_list *lst);
void	set_indexes(t_list *lst);
void	sort(t_list **stack_a, t_list **stack_b);
void	sort3(t_list **lst);
void	sort4(t_list **stack_a, t_list **stack_b);
void	sort5(t_list **stack_a, t_list **stack_b);
int		len_bin(int max);
void	sort_radix(t_list **stack_a, t_list **stack_b);
void	free_stack(t_list **lst);
void	ft_init(t_list **tmp, t_list **max, int *min, t_list *lst);
#endif