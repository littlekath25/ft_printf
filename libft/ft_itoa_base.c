/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 14:44:27 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/11 14:12:25 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static char		*makeint(char *str, int base, int n)
{
	int i;
	int rem;
	int	negative;

	i = 0;
	negative = ft_isnegative(n);
	if (negative && base == 10)
		n *= -1;
	while (n > 0)
	{
		rem = n % base;
		if (rem > 9)
			str[i] = (rem - 10) + 'a';
		else
			str[i] = rem + '0';
		n = n / base;
		i++;
	}
	if (negative)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			*ft_itoa_base(int n, char *str, int base)
{
	int i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}
	makeint(str, base, n);
	ft_strrev(str);
	return (str);
}
