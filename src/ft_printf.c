/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:33:52 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/13 08:35:46 by aapadill         ###   ########.fr       */
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

//#include "../libft/libft.h"
#include "../include/ft_printf.h"

int ft_printf(const char *format, ...)
{
	const char *c;
	va_list args;
	int count;

	count = 0;
	c = format;
	va_start(args, format);
	while(*c)
	{
		if (*c == '%' && *(c + 1))
		{
			c++;
			if (*c == 'c')
				ft_putchar(va_arg(args, int), &count);
			else if (*c == 's')
				ft_putstr(va_arg(args, char *), &count);
			else if (*c == 'p')
			{
				ft_putstr("0x", &count);
				ft_putnbr(va_arg(args, long), "0123456789abcdef", &count);
			}
			else if (*c == 'd' || *c == 'i')
				ft_putnbr(va_arg(args, int), "0123456789", &count);
			else if (*c == 'u')
				ft_putnbr((unsigned int)va_arg(args, int), "0123456789", &count);
			else if (*c == 'x')
				ft_putnbr((unsigned int)va_arg(args, int), "0123456789abcdef", &count);
			else if (*c == 'X')
				ft_putnbr((unsigned int)va_arg(args, int), "0123456789ABCDEF", &count);
			else if (*c == '%')
				ft_putchar('%', &count);
		}
		else
			ft_putchar(*c, &count);
		c++;
	}
	va_end(args);
	return (count);
}

