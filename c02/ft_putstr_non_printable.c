/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <sjoong-h@42SEOUL.KR>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:53:32 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/03 18:09:17 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	wrtie(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	char a;

	i = 0;
	a = str[i];
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] != 127)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[a / 16]);
			ft_putchar("0123456789abcdef"[a % 16]);
		}
		i++;
	}
}
