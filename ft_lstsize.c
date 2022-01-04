/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:58:03 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/24 18:16:39 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*buff;
	int		i;

	if (!lst)
		return (0);
	i = 1;
	buff = lst;
	while (buff->next != NULL)
	{
		i++;
		buff = buff->next;
	}
	return (i);
}
