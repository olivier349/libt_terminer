/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:23:14 by oliove            #+#    #+#             */
/*   Updated: 2022/12/22 22:03:08 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	size_t			ii;

	i = 0;
	ii = 0;
	if (!s)
		return (0);
	if (((size_t)ft_strlen(s) - start) < len)
		len = (size_t)ft_strlen(s) - start;
	if ((unsigned int)ft_strlen(s) < start)
		len = 0;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (i >= start && ii < len)
		{
			res[ii] = s[i];
			ii++;
		}
		i++;
	}
	res[ii] = '\0';
	return (res);
}
