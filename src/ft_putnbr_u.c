/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:56:59 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/10 18:39:40 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_u(unsigned int n, const char *base, int *count)
{
	unsigned int base_n;

	base_n = ft_strlen(base);
	if (n >= base_n)
		ft_putnbr_u(n / base_n, base, count);
	if (write(1, base + (n % base_n), 1))
		(*count)++;
	else
		return (-1);
	return (1);
}
