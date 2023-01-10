/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:04:27 by oliove            #+#    #+#             */
/*   Updated: 2022/11/10 09:02:39 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*sourc;
	char	*dest;
	size_t	i;

	i = 0;
	sourc = (char *)src;
	dest = (char *)dst;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dst);
}
