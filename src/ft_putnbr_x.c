/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 09:50:11 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/14 10:00:34 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
//#include "../libft/libft.h"

int	ft_putnbr_x(long n, int base_n, int *count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n < 0)
	{
		*count += write(1, "-", 1);
		n = -n;
	}
	if (n >= base_n)
		ft_putnbr_x(n / base_n, base_n, count);
	if (*count == -1 || !ft_putchar(base[n % base_n], count))
		return (0);
	return (1);
}

