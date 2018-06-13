/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:39:25 by beloff            #+#    #+#             */
/*   Updated: 2018/06/13 02:09:20 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *str;

	str = NULL;
	if (size)
	{
		if (!(str = (unsigned char *)malloc(size)))
			return (NULL);
		str[size] = 0;
		while (size)
			str[--size] = 0;
	}
	return ((void *)str);
}
