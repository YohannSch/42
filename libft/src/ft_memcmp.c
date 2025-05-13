/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:54:10 by yscheupl          #+#    #+#             */
/*   Updated: 2025/05/13 17:21:02 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	unsigned char	*	temp_s1;
	unsigned char	*	temp_s2;

	i = 0;
	temp_s1 = (unsigned char	*) s1;
	temp_s2 = (unsigned char	*) s2;
	while (i < n)
	{
		if (temp_s1[i] == temp_s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	i--;
	return (s1[i] - s2[i])
}