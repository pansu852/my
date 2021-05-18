#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[i] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main()
{
	int b = 5;
	int a[5] = {5, 4, 3, 2, 1};
	ft_sort_int_tab(a,b);

	for (int i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
}
