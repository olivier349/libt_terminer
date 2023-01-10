/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:45:52 by oliove            #+#    #+#             */
/*   Updated: 2022/12/17 18:46:03 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_getlen(int n)
{
	long	length;

	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
	{
		length++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length++);
}

static int	ft_sym(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long	nb;
	long	length;
	char	*res;

	nb = n;
	length = ft_getlen(nb);
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (!res)
		return (NULL);
	res[length] = '\0';
	length--;
	if (nb < 0)
		nb = -nb;
	while (length >= 0)
	{
		res[length] = (nb % 10) + '0';
		length--;
		nb /= 10;
	}
	if (ft_sym(n))
		res[0] = '-';
	return (res);
}
