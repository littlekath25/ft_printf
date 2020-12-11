/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printchar.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 14:29:02 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/10 21:17:48 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printchar(va_list args, t_flags *flag)
{
	char a;
	char str[2];

	a = va_arg(args, int);
	str[0] = a;
	str[1] = '\0';
	flag->type = str;
	return (0);
}
