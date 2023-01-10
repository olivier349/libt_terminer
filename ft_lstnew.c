/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:51:57 by oliove            #+#    #+#             */
/*   Updated: 2022/12/17 18:52:03 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mail;

	mail = malloc(sizeof(t_list));
	if (mail == NULL)
		return (NULL);
	mail->content = content;
	mail->next = NULL;
	return (mail);
}
