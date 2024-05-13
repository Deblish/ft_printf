/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:18:09 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/13 15:14:49 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putstr(const char *s, int *count)
{
	if (!s)
		*count += write(1, "(null)", 6);
	while (s && *s)
	{
		//if (write(1, s++, 1))
		//(*count)++;
		//else
		//{
		//	*count = -1;
		//	return (-1);
		//}
		if (ft_putchar(*s, count) != -1)
			s++;
		else
			return (-1);
	}
	return (1);
}
