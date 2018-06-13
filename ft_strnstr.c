/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:06:26 by beloff            #+#    #+#             */
/*   Updated: 2018/06/13 01:49:32 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = len;
	if (needle[j] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0' && len--)
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0' && (i + j) <= k)
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
