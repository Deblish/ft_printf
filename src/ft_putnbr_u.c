/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:44:58 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/13 15:59:22 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
//#include "../libft/libft.h"

int	ft_putnbr_u(unsigned long n, const char *base, int *count)
{
	static unsigned long	base_n;

	if (!base_n)
		base_n = (long)ft_strlen(base);
	if (n >= base_n)
		ft_putnbr_u(n / base_n, base, count);
	if (*count == -1 || ft_putchar(base[n % base_n], count) == -1)
		return (-1);
	return 1;
}
