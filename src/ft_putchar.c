/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:29:20 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/10 14:29:25 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int    ft_putchar(char c, int *count)
{
	if(write(1, &c, 1))
        (*count)++;
    else
        return (-1);
    return (1);
}