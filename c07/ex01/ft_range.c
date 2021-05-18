#include <stdlib.h>

int	*ft_range(int min, int max)
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
		i++:
	}
	return (ch);
}
