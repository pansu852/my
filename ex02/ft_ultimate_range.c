/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:23:25 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/14 03:57:36 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int *ch;

	if (min >= max)
		return (0);
	if ((ch = malloc(sizeof(int) * (max - min))) == 0)
			return (0);
	i = 0;
	while (min < max)
	{
		ch[i] = min;
	}
}
