int	ft_atoi(char *str)
{
	int n;
	int minus;

	n = 0;
	minus = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			minus *= -1;
	}
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (n);
		n = ((n * 10) + (minus * ((*str++) - '0')));
	}
	return (n);
}
