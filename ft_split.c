/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:43:03 by scervell          #+#    #+#             */
/*   Updated: 2024/01/15 10:51:08 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	**error_mem(char **arr, size_t i)
{
	while (arr[i] != NULL)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

static int	word_count(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			i++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (i);
}

static char	*word_mem(const char *s, char c)
{
	char	*arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	arr = malloc(i + 1);
	if (!arr)
		return (NULL);
	while (j < i)
	{
		arr[j] = s[j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	arr = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			arr[i] = word_mem(s, c);
			if (arr[i] == NULL)
				return (error_mem(arr, 0));
			i++;
		}
		while (*s != c && *s != '\0')
			s++;
	}
	arr[i] = NULL;
	return (arr);
}
