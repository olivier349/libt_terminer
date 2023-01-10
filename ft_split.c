/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 03:43:15 by oliove            #+#    #+#             */
/*   Updated: 2022/12/22 22:04:29 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int		i;
	int		j;
	char	ch_c;

	i = 0;
	j = 0;
	ch_c = c;
	while (s[i] != '\0')
	{
		if (ch_c == c && s[i] != c)
			j++;
		ch_c = s[i];
		i++;
	}
	return (j);
}

static char	*ft_free_sub(char *str)
{
	free(str);
	return (NULL);
}

static char	*ft_substr_mod(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > (unsigned int)ft_strlen(s))
		len = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (ft_free_sub(dest));
	while (s[i])
	{
		if (i >= start && j < len)
			dest[j++] = s[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

// Netoyage avec free des tab
static void	*ft_free(char **tab, int w)
{
	int	i;

	i = 0;
	while (i != w)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		w;

	w = 0;
	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] && s[j] && w < ft_word_count(s, c))
	{
		i = j;
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		tab[w++] = ft_substr_mod(s, i, j - i);
		if (!tab[w - 1])
			return (ft_free(tab, w));
	}
	tab[w] = NULL;
	return (tab);
}
