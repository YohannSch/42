/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:13:09 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/10 14:06:00 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alocation;

	if (nmemb > (2147483647 / size))
		return (NULL);
	alocation = (char *)malloc(sizeof(char) * (size * nmemb));
	if (!alocation)
		return (NULL);
	ft_bzero(alocation, size * nmemb);
	return (alocation);
}
