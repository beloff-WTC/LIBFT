/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:51:55 by beloff            #+#    #+#             */
/*   Updated: 2018/06/13 02:28:39 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	nbr;
	int		flag;
	int		len;
	char	*str;

	nbr = n;
	flag = 0;
	len = ft_nbrlen((int)nbr);
	if (!(str = ft_strnew(len)))
		return (NULL);
	len--;
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
		flag = 1;
	}
	while (len >= flag)
	{
		str[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
