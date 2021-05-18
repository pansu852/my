#include <unistd.h>

void	ft_putstr(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		write(1, charptr, 1);
		charptr++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_argc(char *tab[], int size)
{
	int i;
	int j;
	char *temp;

	i = 1;
	while (1 < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i] < 0)
			{
				temp = tab[i];
				tab[j] = tab[j];
				tab[j] = temp;0
			}
			j++:
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int i;

	ft_sort_argc(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}

