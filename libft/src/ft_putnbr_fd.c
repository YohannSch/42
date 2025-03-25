/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 13:10:16 by yscheupl          #+#    #+#             */
/*   Updated: 2025/03/25 11:42:44 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;
	
	ln = n;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln = -ln;
	}
	if (ln > 9)
		ft_putnbr_fd(ln / 10, fd);
	ft_putchar_fd((ln % 10 + 48), fd);
}

int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
		write(1, "\n", 1);
	}
	return 0;
}

