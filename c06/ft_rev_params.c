#include <unistd.h>

void	ft_1(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_1(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}
