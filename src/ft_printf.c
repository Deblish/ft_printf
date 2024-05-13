/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:33:52 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/13 15:48:17 by aapadill         ###   ########.fr       */
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

int	ft_printf(const char *format, ...)
{
	const char	*c;
	va_list		args;
	int		count;

	count = 0;
	c = format;
	va_start(args, format);
	while (*c)
	{
		if (*c == '%' && *(c + 1))
		{
			c++;
			if (*c == 'c' && -1 == ft_putchar(va_arg(args, int), &count))
				return (-1);
			else if (*c == 's' && -1 == ft_putstr(va_arg(args, char *), &count))
				return (-1);
			else if (*c == 'p' && (-1 == ft_putstr("0x", &count) || -1 == ft_putnbr_u((unsigned long)va_arg(args, long), "0123456789abcdef", &count)))
				return (-1);
			else if ((*c == 'd' || *c == 'i') && -1 == ft_putnbr(va_arg(args, int), "0123456789", &count))
				return (-1);
			else if (*c == 'u' && -1 == ft_putnbr((unsigned int)va_arg(args, int), "0123456789", &count))
				return (-1);
			else if (*c == 'x' && -1 == ft_putnbr((unsigned int)va_arg(args, int), "0123456789abcdef", &count))
				return (-1);
			else if (*c == 'X' && -1 == ft_putnbr((unsigned int)va_arg(args, int), "0123456789ABCDEF", &count))
				return (-1);
			else if (*c == '%' && -1 == ft_putchar('%', &count))
				return (-1);
		}
		else if (-1 == ft_putchar(*c, &count))
			return (-1);
		c++;
	}
	va_end(args);
	return (count);
}
