/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:23:07 by oliove            #+#    #+#             */
/*   Updated: 2022/12/17 18:50:08 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	j;

	j = (char)c;
	i = ft_strlen(s);
	if (j == '\0')
		return ((char *)s + i);
	while (s[i] != j && i > 0)
		i--;
	if (s[i] == j)
		return ((char *)s + i);
	return (NULL);
}
