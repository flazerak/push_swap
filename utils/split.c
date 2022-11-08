/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:40:09 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 23:47:26 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	countsplits(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	*ft_free(char **p, int j)
{
	while (j >= 0)
		free(p[j--]);
	free(p);
	return (NULL);
}

int	skip_c(char *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

char	**ft_malloc(char *s, char c)
{
	if (!s)
		return (NULL);
	return (malloc((countsplits(s, c) + 1) * sizeof(char *)));
}

char	**ft_split(char *s, char c)
{
	char	**splt;
	int		i;
	int		start;
	int		j;

	splt = ft_malloc(s, c);
	if (!splt)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i = skip_c(s, c, i);
		start = i;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
			i++;
		splt[j] = ft_substr(s, start, i - start);
		if (!splt[j])
			return (ft_free(splt, j));
		j++;
	}
	splt[j] = NULL;
	return (splt);
}
