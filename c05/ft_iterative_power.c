/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <sjoong-h@42SEOUL.KR>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 01:40:03 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/04 01:41:53 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power -= 1)
		i *= nb;
	return (i);
}
