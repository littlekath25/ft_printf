/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printuint.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 14:29:02 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/08 21:25:40 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printuint(va_list args, t_flags *flag)
{
	char		*str;
	unsigned	number;

	number = va_arg(args, int);
	str = ft_itoa(number);
	flag->type = str;
	return (0);
}
