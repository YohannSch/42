/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:17:50 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/03 00:06:33 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **head_a)
{
	int	tmp;

	if (head_a == NULL || (*head_a)->next == NULL)
		return ;
	tmp = (*head_a)->value;
	(*head_a)->value = (*head_a)->next->value;
	(*head_a)->next->value = tmp;
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **head_b)
{
	int	tmp;

	if (head_b == NULL || (*head_b)->next == NULL)
		return ;
	tmp = (*head_b)->value;
	(*head_b)->value = (*head_b)->next->value;
	(*head_b)->next->value = tmp;
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **head_a, t_list **head_b)
{
	int	tmp;

	if (head_a == NULL || (*head_a)->next == NULL)
		return ;
	tmp = (*head_a)->value;
	(*head_a)->value = (*head_a)->next->value;
	(*head_a)->next->value = tmp;
	if (head_b == NULL || (*head_b)->next == NULL)
		return ;
	tmp = (*head_b)->value;
	(*head_b)->value = (*head_b)->next->value;
	(*head_b)->next->value = tmp;
	ft_putendl_fd("ss", 1);
}
