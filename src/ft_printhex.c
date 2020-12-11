/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printhex.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 14:29:02 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/11 12:33:58 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printhex(va_list args, t_flags *flag, char c)
{
	char	str[1000];
	int		number;
	int		i;

	number = va_arg(args, int);
	ft_itoa_base(number, str, 16);
	if (c == 'X')
	{
		while (str[i] != '\0')
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	flag->type = str;
	return (0);
}
