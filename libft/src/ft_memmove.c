/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:12:24 by yscheupl          #+#    #+#             */
/*   Updated: 2025/05/07 17:16:31 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	char mv_dest[n];
	char * tmp_dest;
	char * tmp_src;
	
	i = 0;
	tmp_dest = (char *) dest;
	tmp_src = (char *) src;
	while (i < n)
	{
		mv_dest[i] = tmp_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = mv_dest[i];
		i++;
	}	
	return (dest);
}