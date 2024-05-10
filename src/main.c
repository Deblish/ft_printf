/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:59:39 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/10 16:02:06 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
//#include "../libft/libft.h"
#include <stdio.h>

int main(void)
{
	char c;

	c = 'a';
	ft_printf("%c, %s, %p, \n%d, %i, %u, %x, %X, %%", c, "test", &c, 1000, 2000, 3000, 4000);
	write(1, "\n", 1);
	//printf("%c, %i, %s, string2: %s", ch, 2147483649, "amosaver", "segundo string");
	return 0;
}