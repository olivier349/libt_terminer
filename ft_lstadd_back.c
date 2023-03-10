/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <oliove@student42mulhouse.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:40:37 by oliove            #+#    #+#             */
/*   Updated: 2022/12/17 02:04:11 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!(*lst))
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
