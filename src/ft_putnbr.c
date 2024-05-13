/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:07:19 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/13 11:14:02 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
//#include "../libft/libft.h"

int	ft_putnbr(long n, const char *base, int *count)
{
	static long	base_n;

	base_n = 0;
	if (!base_n)
		base_n = ft_strlen(base);
	if (n < 0)
	{
		*count += write(1, "-", 1);
		n = -n;
	}
	if (n >= base_n)
		ft_putnbr(n / base_n, base, count);
	if (write(1, base + (n % base_n), 1))
		(*count)++;
	else
		return (-1);
	return (1);
}
