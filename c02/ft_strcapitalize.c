/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <sjoong-h@42SEOUL.KR>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:19:12 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/03 15:43:50 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num(char c)
{
	return (c >= '0' && c <= '9');
}

int	large(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	small(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	ft_strcapitalize(char *str)
{
	char *c1;

	c1 = str;
	while (*c1)
	{
		if (num(*c1) || large(*c1) || small(*c1))
		{
			if (num(*c1))
				while (num(c1[1]))
					c1++;
			else if (large(*c1))
				*c1 -= 32;
			while (large(*(++c1)) || small(*c1))
				if (small(*c1))
					*c1 += 32;
		}
		else
		c1++;
	}
	return (str);
}
