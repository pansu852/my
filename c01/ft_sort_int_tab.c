/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <sjoong-h@42SEOUL.KR>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:22:42 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/01 15:22:43 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] >= tab[j])
				swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
#include <stdio.h>

int	main()
{
	int b = 5;
	int a[5] = {4, 5, 3,1 ,2};

	ft_sort_int_tab(a, b);
	for (int i = 0;  i < 5; i++)
	{
		printf("%d", a[i]);
	}
}
