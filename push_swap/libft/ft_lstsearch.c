/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 01:34:47 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/01 02:07:05 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsearch(t_list *head, t_list *searching)
{
	int		i;
	t_list	*tmp;

	i = 0;
	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != searching)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
