/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:13:09 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/16 21:10:17 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alocation;

	if (size == 0)
		return (ft_strdup(""));
	if (nmemb > (2147483647 / size))
		return (NULL);
	alocation = (char *)malloc(sizeof(char) * (size * nmemb));
	if (!alocation)
		return (NULL);
	ft_bzero(alocation, size * nmemb);
	return (alocation);
}
