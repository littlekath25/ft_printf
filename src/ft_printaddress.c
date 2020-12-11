/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printaddress.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 14:29:02 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/11 14:29:44 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printaddress(va_list args, t_flags *flag)
{
	char	str[1000];
	long	number;

	number = va_arg(args, int);
	ft_itoa_base(number, str, 16);
	flag->type = str;
	return (0);
}
