/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:17:50 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/03 00:04:57 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **head_a, t_list **head_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	if (*head_a == NULL)
		return ;
	if (!(*head_b))
	{
		(*head_b) = (*head_a);
		(*head_a) = (*head_a)->next;
		(*head_a)->prev->prev->next = (*head_a);
		(*head_a)->prev = (*head_a)->prev->prev;
		tmp_b = (*head_b);
		(*head_b)->next = tmp_b;
		(*head_b)->prev = tmp_b;
		ft_putendl_fd("pb", 1);
		return ;
	}
	tmp_a = (*head_a)->next;
	tmp_a->prev = (*head_a)->prev;
	(*head_a)->next = (*head_b);
	if ((*head_b)->prev == NULL)
		(*head_a)->prev = (*head_b);
	else
		(*head_a)->prev = (*head_b)->prev;
	(*head_a)->prev->next = *head_a;
	(*head_b)->prev = *head_a;
	*head_b = (*head_b)->prev;
	*head_a = tmp_a;
	tmp_a->prev->next = *head_a;
	ft_putendl_fd("pb", 1);
}

void	pa(t_list **head_a, t_list **head_b)
{
	t_list	*tmp_b;
	t_list	*tmp_a;

	if (*head_b == NULL)
		return ;
	if (!(*head_a))
	{
		(*head_a) = (*head_b);
		(*head_b) = (*head_b)->next;
		(*head_b)->prev->prev->next = (*head_b);
		(*head_b)->prev = (*head_b)->prev->prev;
		tmp_a = (*head_a);
		(*head_a)->next = tmp_a;
		(*head_a)->prev = tmp_a;
		ft_putendl_fd("pa", 1);
		return ;
	}
	tmp_b = (*head_b)->next;
	tmp_b->prev = (*head_b)->prev;
	(*head_b)->next = (*head_a);
	if ((*head_a)->prev == NULL)
		(*head_b)->prev = (*head_a);
	else
		(*head_b)->prev = (*head_a)->prev;
	(*head_b)->prev->next = *head_b;
	(*head_a)->prev = *head_b;
	*head_a = (*head_a)->prev;
	*head_b = tmp_b;
	tmp_b->prev->next = *head_b;
	ft_putendl_fd("pa", 1);
}
