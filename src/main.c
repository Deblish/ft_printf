/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:59:39 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/13 08:59:48 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
//#include "../libft/libft.h"
#include <stdio.h>

int main(void)
{
	//char c;

	//c = 'a';
	ft_printf(" NULL %s NULL ", NULL);
	//ft_printf("%c, %s, %p, %d, %u, %x, %X, %%\n", c, "test", &c, INT_MIN, -2000, INT_MAX, 4000);
	write(1, "\n", 1);
	//printf("%c, %s, %p, %d, %u, %x, %X, %%\n", c, "test", &c, INT_MIN, -2000, INT_MAX, 4000);
	//printf(" NULL %s NULL ", NULL);
	return 0;
}
