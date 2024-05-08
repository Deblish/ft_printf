/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:54:45 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/26 10:35:33 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**
** @brief Function description.
**
** @param paramName Description of the parameter.
** @return Description of the return value.
**
*/

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	return (1);
}
