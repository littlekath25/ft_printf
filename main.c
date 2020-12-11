/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 13:14:56 by kfu           #+#    #+#                 */
/*   Updated: 2020/12/11 14:42:23 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"

int		main(void)
{
	int a = 10;
	unsigned long address = (unsigned long)&a;

	// comparison
	printf("%p\n", &a);
	printf("0x%lx\n", address);
	return (0);
}
