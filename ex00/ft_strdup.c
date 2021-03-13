/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 03:14:45 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/14 01:20:10 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	char	*ch;

	i = 0;
	while (src[i])
		i++;
	ch = (char*)malloc(sizeof(char) * i);
	i = 0;
	while (src[i])
	{
		ch[i] = src[i];
		i++;
	}
	ch = '\0';
	return (ch);
}
