/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 01:34:47 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/01 04:11:16 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *head)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (head == NULL)
		return (0);
	tmp = head->next;
	if (tmp == NULL)
		return (1);
	while (tmp != head)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
