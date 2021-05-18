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
	argc = 0;
	ft_1(argv[0]);
		write(1, "\n", 1);
}
