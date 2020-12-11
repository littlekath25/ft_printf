/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parse.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 13:51:45 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/11 12:40:33 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parseflags(char **str, t_flags *flag)
{
	while (ft_strchr(FLAGS, **str))
	{
		if (**str == '-')
			flag->minus = 1;
		if (**str == '0')
			flag->zero = 1;
		(*str)++;
	}
}

void	ft_parsewp(va_list args, char **str, t_flags *flag)
{
	while (ft_strchr(WP, **str))
	{
		if (**str == '*')
			flag->width = va_arg(args, int);
		else if (ft_isdigit(**str))
		{
			flag->width = ft_atoi(*str);
			while (ft_isdigit(**str))
				(*str)++;
		}
		if (**str == '.')
		{
			(*str)++;
			if (**str == '*')
				flag->precision = va_arg(args, int);
			else if (ft_isdigit(**str))
			{
				flag->precision = ft_atoi(*str);
				while (ft_isdigit(**str))
					(*str)++;
				break ;
			}
		}
		(*str)++;
	}
}

void	ft_parsetype(va_list args, char **str, t_flags *flag)
{
	if (**str == 'c')
		ft_printchar(args, flag);
	if (**str == 's')
		ft_printstr(args, flag);
	if (**str == 'p')
		ft_printaddress(args, flag);
	if (**str == 'd' || (**str == 'i'))
		ft_printint(args, flag);
	if (**str == 'u')
		ft_printuint(args, flag);
	if (**str == 'x' || **str == 'X')
		ft_printhex(args, flag, **str);
	// if (**str == '%')
	// 	ft_putchar_fd('%', 1);
}