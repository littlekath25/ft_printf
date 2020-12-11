/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 14:44:27 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/10 20:21:49 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static char		*makeint(char *tmp, int isnegative, int n, int len)
{
	while (n > 0)
	{
		tmp[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (isnegative)
		tmp[len] = '-';
	return (tmp);
}

char			*ft_itoa(int n)
{
	int		isnegative;
	char	*tmp;
	int		len;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	isnegative = ft_isnegative(n);
	len = ft_intlen(n);
	tmp = (char *)malloc(len + 1);
	if (!tmp)
		return (NULL);
	if (isnegative)
		n *= -1;
	tmp[len] = '\0';
	len--;
	makeint(tmp, isnegative, n, len);
	return (tmp);
}
