/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:33:52 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/08 14:31:49 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @description
** see man printf
**
** @param
** format: string with format to print, includes many escape sequences, flags
** and format characters
** arguments: va_list with the elements of the format characters
**
** @return
** number of characters printed, negative if error
*/

#include "../include/ft_printf.h"

int ft_printf(const char *format, ...)
{
	const char *c;
	va_list args;

	c = format;
	va_start(args, format);
	while(*c)
	{
		if (*c == '%')
		{
			c++;
			if (*c == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			if (*c == 'i' || *c == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
		}
		else
			ft_putchar_fd(*c, 1);
		c++;
		//else if (*c == '\\')
		//{
		//}
	}
	return (0);
}
