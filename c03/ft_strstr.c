/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoong-h <sjoong-h@42SEOUL.KR>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:55:56 by sjoong-h          #+#    #+#             */
/*   Updated: 2021/03/02 18:42:16 by sjoong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (*to_find == '\0')
		return (str);
       while (*str)
       {
	       if (*str == *to_find)
	       {
		       i = 1;
		       while (to_find[i] && str[i] == to_find[i])
			       i++;
		       if (to_find[i] == '\0')
			       return (str);
	       }
	       str++;
       }
       return (0);
}
