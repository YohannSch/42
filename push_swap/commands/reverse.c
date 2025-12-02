/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:17:50 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/03 00:05:50 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **head_a)
{
	if (head_a == NULL || (*head_a)->next == NULL)
		return ;
	*head_a = (*head_a)->prev;
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **head_b)
{
	if (head_b == NULL || (*head_b)->next == NULL)
		return ;
	*head_b = (*head_b)->prev;
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **head_a, t_list **head_b)
{
	if (head_a == NULL || (*head_a)->next == NULL)
		return ;
	*head_a = (*head_a)->prev;
	if (head_b == NULL || (*head_b)->next == NULL)
		return ;
	*head_b = (*head_b)->prev;
	rrb(head_b);
	ft_putendl_fd("rrr", 1);
}
