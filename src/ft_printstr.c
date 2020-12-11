/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printstr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 14:29:02 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/08 16:49:20 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printstr(va_list args, t_flags *flag)
{
	char *str;

	str = va_arg(args, char *);
	flag->type = str;
	return (0);
}
