/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:05:49 by aapadill          #+#    #+#             */
/*   Updated: 2024/05/09 09:12:51 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	check_rep(char *base)
{
	char	c;
	char	*ptr;

	while(*base)
	{
		c = *base;
		ptr = base + 1;
		while (*ptr && *ptr != c)
			ptr++;
		if (*ptr == c)
			return (1);
		base++;
	}
	return (0);
}

static int	check_symb(char *base)
{
	if (ft_strchr((const char)base, '+') || 
		(ft_strchr((const char)base, '-'))
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base, int fd)
{
	size_t nbase;
	if (!base || ft_strlen(base) < 2)
		return ;
	if (check_rep(base) && check_symb(base))
		return ;
	nbase = ft_strlen(base);
	if (nbr == -2147483648)
		ft_putstr_fd("-2147483648", fd); //improve, using size_t?
	else if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_base_fd(-nbr, base, fd);
	}
	else if (nbr >= nbase)
	{
		ft_putnbr_base_fd(nbr / nbase, base, fd);
		ft_putchar_fd(base[nbr % nbase], fd);
	}
	else
		ft_putchar_fd(base[nbr], fd);
}
}
