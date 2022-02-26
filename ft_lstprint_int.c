/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:23:14 by nguiard           #+#    #+#             */
/*   Updated: 2022/02/15 14:22:32 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint_int(t_list_int *lst)
{
	t_list_int	*buff;

	if (!lst)
	{
		ft_printf("La liste est vide\n");
		return ;
	}
	buff = lst;
	while (buff)
	{
		ft_printf("%l\n", buff->content);
		buff = buff->next;
	}
}

/*
void	ft_lstdoubleprint_int(t_list_int *lst_a, t_list_int *lst_b)
{
	t_list_int	*buff_a;
	t_list_int	*buff_b;
	int			a_content;
	int			b_content;

	buff_a = lst_a;
	while (buff_a->next != NULL && )
	{
		if (1)
		;
		ft_printf("\033[32m%d\t\033[34m%d\n", buff_a->content, buff_b->content);
		buff_a = buff_a->next;
	}
	ft_printf("\033[32m%d\t\033[34m%d\n\033[0m", buff_a->content, buff_b->content);
}
*/