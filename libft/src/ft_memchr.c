/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:47:10 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/10 19:12:28 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*temp_s;

	i = 0;
	temp_s = (const unsigned char *) s;
	while (i < n)
	{
		if (temp_s[i] == (unsigned char) c)
			return ((void *)&temp_s[i]);
		i++;
	}
	return (NULL);
}
