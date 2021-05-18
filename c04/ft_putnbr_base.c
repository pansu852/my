#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_con(char c)
	char v;

	if ((c >= 9 && c <= 13) || c == ' ')
		return 0;
	if (c == '+' || c == '-')
		return 0;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = -1;
	while (*base[++i])
		if (ft_con)
		return i;
}
