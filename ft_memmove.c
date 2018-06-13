/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:30:34 by beloff            #+#    #+#             */
/*   Updated: 2018/06/13 03:39:50 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;
	size_t	i;

	i = -1;
	p1 = (char *)dst;
	p2 = (char *)src;
	if (p2 < p1)
		while ((int)(--len) >= 0)
			*(p1 + len) = *(p2 + len);
	else
		while (++i < len)
			*(p1 + i) = *(p2 + i);
	return (dst);
}
