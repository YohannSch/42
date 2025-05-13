/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:58:13 by yscheupl          #+#    #+#             */
/*   Updated: 2025/05/07 17:16:42 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	char * tmp_dest;
	char * tmp_src;
	
	i = 0;
	tmp_dest = (char *) dest;
	tmp_src = (char *) src;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}