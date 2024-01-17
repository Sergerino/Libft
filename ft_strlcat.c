/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:43:44 by scervell          #+#    #+#             */
/*   Updated: 2024/01/17 10:09:48 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		len;
	size_t	i;

	len = 0;
	i = 0;
	while (dst[i])
		i++;
	while (src[len])
		len++;
	if (i >= size)
		len += size;
	else
		len += i;
	while (i + 1 < size && *src != '\0')
		dst[i++] = *src++;
	dst[i] = '\0';
	return (len);
}
