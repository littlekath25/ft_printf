/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 11:14:27 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/11 11:28:05 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	resetstruct(t_flags *flag)
{
	flag->type = NULL;
	flag->minus = 0;
	flag->zero = 0;
	flag->width = 0;
	flag->precision = -1;
}

int		ft_iterate(va_list args, char *str, t_flags *flag)
{
	while (*str != '\0')
	{
		if (*str == '%')
		{
			resetstruct(flag);
			str++;
			if (ft_strchr(FLAGS, *str))
				ft_parseflags(&str, flag);
			if (ft_strchr(WP, *str))
				ft_parsewp(args, &str, flag);
			if (ft_strchr(CONVS, *str))
				ft_parsetype(args, &str, flag);
			ft_putstr_fd(flag->type, 1);
		}
		else
			ft_putchar_fd(*str, 1);
		str++;
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	va_list	args;
	char	*str;
	t_flags flag;

	str = (char *)format;
	va_start(args, format);
	ft_iterate(args, str, &flag);
	va_end(args);
	printf("M: {%i}\n", flag.minus);
	printf("Z: {%i}\n", flag.zero);
	printf("W: {%i}\n", flag.width);
	printf("P: {%i}\n", flag.precision);
	printf("T: {%s}\n", flag.type);
	return (0);
}
