/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:48:12 by scervell          #+#    #+#             */
/*   Updated: 2023/10/30 00:24:01 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	arr = (char *)malloc(ft_strlen(s) + 1);
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
