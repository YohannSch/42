/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:05:51 by yscheupl          #+#    #+#             */
/*   Updated: 2025/05/07 16:51:12 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	char * tmp;
	
	i = 0;
	tmp = (char *) s;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (s);
}
