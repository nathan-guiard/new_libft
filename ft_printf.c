/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:52:38 by nguiard           #+#    #+#             */
/*   Updated: 2022/01/04 03:08:00 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*init_fnc_tab(void)
{
	void	**res;

	res = malloc(sizeof(void *) * 8);
	res[nombre] = &count_putnbr;
	res[caractere] = &count_putchar;
	res[non_signe] = &count_putunsigned;
	res[pointeur] = &count_putptr;
	res[hex_min] = &count_puthex_min;
	res[hex_maj] = &count_puthex_maj;
	res[pourcent] = &count_putprct;
	res[chaine] = &count_putstr;
	return (res);
}

int	do_your_shit(t_type mod, va_list param_list)
{
	if (mod == nombre)
		return (count_putnbr((int)va_arg(param_list, long)));
	if (mod == caractere)
		return (count_putchar((char)va_arg(param_list, int)));
	if (mod == non_signe)
		return (count_putunsigned((long)va_arg(param_list, unsigned int)));
	if (mod == pointeur)
		return (count_putptr((void *)va_arg(param_list, void *)));
	if (mod == hex_min)
		return (count_puthex_min((int)va_arg(param_list, long)));
	if (mod == hex_maj)
		return (count_puthex_maj((int)va_arg(param_list, long)));
	if (mod == pourcent)
		return (count_putprct());
	if (mod == chaine)
		return (count_putstr(va_arg(param_list, char *)));
	return (0);
}

int	print_everything(const char *s, t_type *tab_type, va_list param_list)
{
	int	i;
	int	count;
	int	curr_arg;

	curr_arg = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && is_valid(s[i + 1]) != rien)
		{
			count += do_your_shit(tab_type[curr_arg], param_list);
			curr_arg++;
			i += 2;
		}
		else
		{
			count += count_putchar(s[i]);
			i++;
		}
	}
	return (count);
}

/* fnc_tab[tab_type[arg_nb]](va_arg(param_list, long)); <- ca marche ??? */
int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	param_list;
	t_type	*tab_type;

	va_start(param_list, s);
	tab_type = parsing(s);
	count = print_everything(s, tab_type, param_list);
	va_end(param_list);
	free(tab_type);
	return (count);
}
