/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:43:21 by scervell          #+#    #+#             */
/*   Updated: 2024/01/15 06:54:49 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst || !src)
		return (NULL);
	while (n--)
		((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	return (dst);
}
