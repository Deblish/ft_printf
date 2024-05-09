/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:07:19 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/09 20:29:03 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

void	ft_putnbr(int n, char *base, int *count)
{
	int base_n;

	base_n = ft_strlen(base);
	if (n < 0)
	{
		*count += write(1, "-", 1);
		n = -n;
	}
	if (n >= base_n)
		ft_putnbr(n / base_n, base, count);
	*count += write(1, base + (n % base_n), 1);
}
