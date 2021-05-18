/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <sjoong-h@42SEOUL.KR>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 01:52:01 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/04 02:43:03 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0)
		return (0);

	if (power == 0)
		return (1);
	if (power == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power--);

}
