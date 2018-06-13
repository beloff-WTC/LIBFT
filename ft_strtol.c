/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beloff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 04:29:06 by beloff            #+#    #+#             */
/*   Updated: 2018/06/13 05:24:29 by beloff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_uchar	charmap(char c)
{
	char	chr;

	chr = ft_toupper(c);
	if (chr >= '0' && chr <= '9')
		return (chr - '0');
	if (chr >= 'A' && chr <= 'Z')
		return (chr - 'A' + 10);
	return (127);
}

static int		getbase(const char **nptr, int base)
{
	const char	*ptr;

	ptr = *nptr;
	if ((base == 0 || base == 16) && *ptr == '0')
	{
		if (*(++ptr) == 'x' && (++(ptr)))
			base = 16;
		else if (*ptr == '0')
			base = 8;
		else
			base = 10;
		*nptr = ptr;
	}
	return (base);
}

long			ft_strtol(const char *nptr, char **endptr, int base)
{
	int		neg;
	long	result;
	char	digit;

	if (base < 0 || base > 36)
		return (0);
	neg = 0;
	result = 0;
	while (ft_iswspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			neg = 1;
	base = getbase(&nptr, base);
	while ((digit = charmap(*nptr++)) < base)
		if ((result = (result * base) + digit) < 0)
		{
			if (endptr)
				*endptr = (char*)nptr;
			return (FT_LONG_MAX + neg);
		}
	if (endptr)
		*endptr = (char*)nptr;
	return (result + (result * -2 * neg));
}
