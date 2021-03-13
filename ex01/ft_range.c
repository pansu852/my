/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:42:16 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/14 03:56:06 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_range(int min, int max)
{
	int i;
	int *ch;

	if (min >= max)
		return (0);
	if ((ch = malloc(sizeof(int) * (max - min))) == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		ch[i] = min;
		min++;
		i++;
	}
	return (ch);
}
