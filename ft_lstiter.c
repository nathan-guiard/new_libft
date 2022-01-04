/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:54:23 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/29 11:32:54 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*buff;

	if (!lst)
	{
		return ;
	}
	buff = lst;
	while (buff->next != NULL)
	{
		(*f)(buff->content);
		buff = buff->next;
	}
	(*f)(buff->content);
}
