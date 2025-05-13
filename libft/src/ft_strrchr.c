/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:25:39 by yscheupl          #+#    #+#             */
/*   Updated: 2025/05/13 17:20:58 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *	ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;	
	}
	return (NULL);
}