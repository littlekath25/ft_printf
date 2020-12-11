/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 14:29:02 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/10 21:02:56 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printint(va_list args, t_flags *flag)
{
	char	*str;
	int		number;

	number = va_arg(args, int);
	str = ft_itoa(number);
	flag->type = str;
	return (0);
}
