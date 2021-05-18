/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <sjoong-h@42SEOUL.KR>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:22:10 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/01 15:24:37 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int c1;

	i = 0;
	while (i < (size / 2))
	{
		c1 = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = c1;
		i++;
	}
