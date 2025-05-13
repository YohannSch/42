/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:47:10 by yscheupl          #+#    #+#             */
/*   Updated: 2025/05/13 17:21:07 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

void	*	ft_memchr(const void *s, int c, size_t n)
{
	int i;
	char * temp_s;

	i = 0;
	temp_s = (char *) s;
	while (i < n)
	{
		if (temp_s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == 0)
		return (&s[i]);
	return (NULL);
}