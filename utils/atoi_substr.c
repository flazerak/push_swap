/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:39:57 by flazerak          #+#    #+#             */
/*   Updated: 2022/08/24 23:44:36 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*dup;
	size_t	l;
	size_t	i;

	l = ft_strlen(s) + 1;
	dup = (char *)malloc(sizeof(char) * l);
	i = 0;
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (len > size)
		len = size;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = *(s + start + i);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	ft_atoi(char *str)
{
	long long	i;
	int			sign;
	long long	somme;

	i = 0;
	sign = 1;
	somme = 0;
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' )
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		somme = (somme * 10) + str[i++] - '0';
	if ((somme * sign) > 2147483647 || (somme * sign) < -2147483648)
		error_exit();
	return (somme * sign);
}
