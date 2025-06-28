/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:59:12 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/28 12:35:38 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_printhex(unsigned long long nbr, char *base, int i)
{
	if (nbr >= 16)
	{
		i = ft_printhex(nbr / 16, base, i);
		nbr = nbr % 16;
	}
	i += ft_printchar(base[nbr % 16]);
	return (i);
}
