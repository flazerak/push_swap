/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:40:03 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 23:46:50 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_s;
	int		i;
	int		j;

	if (!s1)
		s1 = ft_strdup("");
	if (!s2)
		return (s1);
	new_s = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)));
	if (!new_s)
		return (NULL);
	i = -1;
	while (s1[++i])
		new_s[i] = s1[i];
	i = 0;
	j = ft_strlen(s1);
	while (s2[i])
		new_s[j++] = s2[i++];
	new_s[j] = '\0';
	free(s1);
	return (new_s);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	is_space(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
