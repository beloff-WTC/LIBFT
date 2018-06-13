/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 23:38:54 by beloff            #+#    #+#             */
/*   Updated: 2018/06/13 02:49:45 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (!(j = (char*)malloc(sizeof(*s1) * i + 1)))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		j[i] = s1[i];
		i++;
	}
	j[i] = '\0';
	return (j);
}
