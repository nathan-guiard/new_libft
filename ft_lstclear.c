/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:45:01 by nguiard           #+#    #+#             */
/*   Updated: 2021/12/05 12:52:50 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buff;
	t_list	*tmp;

	if (!*lst)
		return ;
	buff = *lst;
	while (buff->next != NULL)
	{
		tmp = buff->next;
		ft_lstdelone(buff, del);
		buff = tmp;
	}
	ft_lstdelone(buff, del);
	*lst = NULL;
}
