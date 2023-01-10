/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 05:51:48 by oliove            #+#    #+#             */
/*   Updated: 2022/12/17 18:50:12 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	size_t	i;
	size_t	ii;
	size_t	n_len;

	i = -1;
	n_len = ft_strlen(needle);
	hay = (char *)haystack;
	if (n_len == 0 && haystack == needle)
		return (hay);
	while (hay[++i] != '\0' && i <= len)
	{
		ii = 0;
		while (hay[i + ii] != '\0' && needle[ii] != '\0'
			&& hay[i + ii] == needle[ii] && i + ii < len)
			ii++;
		if (ii == n_len)
			return (hay + i);
	}
	return (0);
}
