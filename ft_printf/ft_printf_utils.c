/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:56:55 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/28 12:34:10 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *s)
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
	return (i);
}

int	ft_printptr(unsigned long long ptr)
{
	int	count;

	if (!ptr)
	{
		count = ft_printstr("(nil)");
		return (count);
	}
	count = ft_printstr("0x");
	count += ft_printhex(ptr, "0123456789abcdef", 0);
	return (count);
}

int	ft_printnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (*count + 11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		*count += 1;
	}
	if (n > 9)
		ft_printnbr(n / 10, count);
	ft_printchar(n % 10 + '0');
	*count += 1;
	return (*count);
}

int	ft_printunbr(unsigned int n, int *count)
{
	if (n > 9)
		ft_printunbr(n / 10, count);
	ft_printchar(n % 10 + '0');
	*count += 1;
	return (*count);
}
