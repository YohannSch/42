/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:13:03 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/03 17:14:17 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	filling_b(t_stacks *stacks, int window_size)
{
	int	i;

	i = 0;
	while (ft_lstsize(stacks->stack_a) > 5)
	{
		if (stacks->stack_a->value > i + window_size)
			ra(&stacks->stack_a);
		else if (stacks->stack_a->value < i)
		{
			pb(&stacks->stack_a, &stacks->stack_b);
			rb(&stacks->stack_b);
			i++;
		}
		else
		{
			pb(&stacks->stack_a, &stacks->stack_b);
			i++;
		}
	}
}

int	find_max_index(t_list *head)
{
	t_list	*tmp;
	int		max;
	int		index;
	int		max_index;

	tmp = head;
	max = tmp->value;
	index = 0;
	max_index = 0;
	while (index < ft_lstsize(head))
	{
		if (tmp->value > max)
		{
			max = tmp->value;
			max_index = index;
		}
		tmp = tmp->next;
		index++;
	}
	return (max_index);
}

void	handle_filling_a(t_stacks *stacks, int max_index, int size)
{
	int	i;

	if (max_index <= size / 2)
	{
		i = 0;
		while (i < max_index)
		{
			rb(&stacks->stack_b);
			i++;
		}
	}
	else
	{
		i = size;
		while (i > max_index)
		{
			rrb(&stacks->stack_b);
			i--;
		}
	}
}

void	filling_a(t_stacks *stacks)
{
	int	size;
	int	max_index;
	int	limit;

	size = ft_lstsize(stacks->stack_b);
	limit = 5;
	while (size > 0)
	{
		max_index = find_max_index(stacks->stack_b);
		handle_filling_a(stacks, max_index, size);
		while (stacks->stack_a->prev->value > stacks->stack_b->value
			&& limit > 0)
		{
			rra(&stacks->stack_a);
			limit--;
		}
		pa(&stacks->stack_a, &stacks->stack_b);
		size--;
	}
}
