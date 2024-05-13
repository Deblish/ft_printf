/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:44:58 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/13 10:53:00 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
//#include "../libft/libft.h"

int	ft_putnbr_u(unsigned long n, const char *base, int *count)
{
	static unsigned long	base_n;

	if (!base_n)
		base_n = ft_strlen(base);
	if (n >= base_n)
		ft_putnbr_u(n / base_n, base, count);
	if (write(1, base + (n % base_n), 1))
		(*count)++;
	else
		return (-1);
	return (1);
}

