/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:25:39 by axcastil          #+#    #+#             */
/*   Updated: 2024/06/15 19:01:59 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	size_t	i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen_gnl(s1);
	b = ft_strlen_gnl(s2);
	str = malloc(a + b + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (a--)
	{
		str[i] = s1[i];
		i++;
	}
	a = i;
	i = 0;
	while (b--)
		str[a++] = s2[i++];
	str[a] = '\0';
	return (str);
}

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	if (s)
	{
		while (*s)
		{
			if (*s == (char)c)
				return ((char *)s);
			s++;
		}
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_substr_gnl(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = NULL;
	if (!*s || ft_strlen_gnl(s) <= start)
	{
		new_str = malloc(1);
		new_str[0] = '\0';
		return (new_str);
	}
	if (ft_strlen_gnl(s + start) <= len)
		len = ft_strlen_gnl(s + start);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen_gnl(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

void	*ft_calloc_gnl(size_t count, size_t size)
{
	char	*string;
	int		i;

	i = 0;
	string = (char *)malloc(count * size);
	if (!string)
		return (NULL);
	while (count--)
	{
		string[i] = '\0';
		i++;
	}
	return (string);
}
