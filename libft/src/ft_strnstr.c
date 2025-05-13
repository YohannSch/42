/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:59:37 by yscheupl          #+#    #+#             */
/*   Updated: 2025/05/13 17:20:56 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

char	*	strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	size_t little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little[i] == 0)
		return (big);
	while (big[i] && i < len)
		{
			if(ft_memcmp(&big[i], little, little_len) == 0)
				return (&big[i]);
			else
				i++;
		}
	return (NULL);
}