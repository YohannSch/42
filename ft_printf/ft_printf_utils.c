/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:56:55 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/24 18:14:58 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_printstr(char *s)
{
	int	i;

	i = 0;
	if (!s || s == NULL)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (s[i])
		write(1, &s[i++], 1);
	return (--i);
}

int ft_printptr(unsigned long long ptr)
{
	int count;

	count = ft_printstr("0x");
	count += ft_printhex(ptr, "0123456789abcdef",0);
	return (count);
}

int ft_printnbr(int n)
{
	int i;

	i = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		i++;
	}
	if (n > 9)
		ft_printnbr(n / 10);
	i += ft_printchar(n % 10 + '0');	
	return (i);
}

int ft_printunbr(unsigned int n)
{
	int i;

	i = 0;
	if (n > 9)
		ft_printunbr(n / 10);
	i += ft_printchar(n % 10 + '0');	
	return (i);
}