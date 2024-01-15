/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:44:51 by scervell          #+#    #+#             */
/*   Updated: 2024/01/15 06:54:22 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_dst;

	p_dst = dst;
	if (!dst || !src)
		return (dst);
	if (dst > src)
		while (len--)
			p_dst[len] = ((char *)src)[len];
	else
		while (len--)
			*p_dst++ = *(char *)src++;
	return (dst);
}
