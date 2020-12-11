/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 14:33:10 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/11 14:35:07 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FLAGS "-0"
# define WP "*.0123456789"
# define CONVS "cspdiuxX%"
# include <stdarg.h>
# include "../libft/libft.h"

typedef struct	s_flags
{
	char	*type;

	int		minus;
	int		zero;

	int		width;
	int		precision;
}				t_flags;

int				ft_printf(const char *format, ...);

void			ft_parsewp(va_list args, char **str, t_flags *flag);
void			ft_parseflags(char **str, t_flags *flag);
void			ft_parsetype(va_list args, char **str, t_flags *flag);

int				ft_printchar(va_list args, t_flags *flag);
int				ft_printstr(va_list args, t_flags *flag);
int				ft_printaddress(va_list args, t_flags *flag);
int				ft_printint(va_list args, t_flags *flag);
int				ft_printuint(va_list args, t_flags *flag);
int				ft_printhex(va_list args, t_flags *flag, char c);

#endif
