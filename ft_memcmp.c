/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:41:27 by scervell          #+#    #+#             */
/*   Updated: 2024/01/15 08:16:08 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
		if ((*(unsigned char *)s1++) != (*(unsigned char *)s2++))
			return ((*(unsigned char *)--s1) - (*(unsigned char *)--s2));
	return (0);
}
