/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:18:12 by yscheupl          #+#    #+#             */
/*   Updated: 2025/05/07 17:27:35 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	int i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src))
}
