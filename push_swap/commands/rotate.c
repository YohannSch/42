/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:17:50 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/01 16:51:06 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void ra(t_list **head_a)
{
	if (head_a == NULL || (*head_a)->next == NULL)
		return ;
	*head_a = (*head_a)->next;
	ft_putendl_fd("ra", 1);
}

void rb(t_list **head_b)
{
	if (head_b == NULL || (*head_b)->next == NULL)
		return ;
	*head_b = (*head_b)->next;
	ft_putendl_fd("rb", 1);
}
void rr(t_list **head_a, t_list **head_b)
{
	if (head_a == NULL || (*head_a)->next == NULL)
		return ;
	*head_a = (*head_a)->next;
	if (head_b == NULL || (*head_b)->next == NULL)
		return ;
	*head_b = (*head_b)->next;
	ft_putendl_fd("rr", 1);
}