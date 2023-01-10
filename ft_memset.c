/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:37:13 by oliove            #+#    #+#             */
/*   Updated: 2022/11/09 17:08:46 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*res;
	int		i;

	i = 0;
	res = b;
	while (len)
	{
		res[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
