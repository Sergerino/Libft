/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:43:21 by scervell          #+#    #+#             */
/*   Updated: 2023/10/30 01:14:46 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*sourc;
	size_t				i;

	dest = (unsigned char *)dst;
	sourc = (unsigned const char *)src;
	i = 0;
	if (dest == NULL && sourc == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dst);
}
