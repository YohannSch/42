/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:10:37 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/03 00:04:38 by yscheupl         ###   ########.fr       */
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

void	filling_a(t_stacks *stacks)
{
	int	size;
	int	max_index;
	int	i;
	int	limit;

	size = ft_lstsize(stacks->stack_b);
	limit = 5;
	while (size > 0)
	{
		max_index = find_max_index(stacks->stack_b);
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

void	sort_five(t_stacks *stacks)
{
	int		size;
	int		min_index;
	t_list	*tmp;
	int		min_value;
	int		index;

	size = ft_lstsize(stacks->stack_a);
	while (size > 3)
	{
		min_index = 0;
		tmp = stacks->stack_a;
		min_value = tmp->value;
		index = 0;
		while (index < size)
		{
			if (tmp->value < min_value)
			{
				min_value = tmp->value;
				min_index = index;
			}
			tmp = tmp->next;
			index++;
		}
		if (min_index <= size / 2)
		{
			while (min_index > 0)
			{
				ra(&stacks->stack_a);
				min_index--;
			}
		}
		else
		{
			while (min_index < size)
			{
				rra(&stacks->stack_a);
				min_index++;
			}
		}
		pb(&stacks->stack_a, &stacks->stack_b);
		size--;
	}
	sort_three(stacks);
	pa(&stacks->stack_a, &stacks->stack_b);
	pa(&stacks->stack_a, &stacks->stack_b);
}

void	sort_three(t_stacks *stacks)
{
	int	first;
	int	second;
	int	third;

	first = stacks->stack_a->value;
	second = stacks->stack_a->next->value;
	third = stacks->stack_a->next->next->value;
	if (first == third)
		return (ra(&stacks->stack_a));
	if (first > second && second < third && first < third)
		sa(&stacks->stack_a);
	else if (first > second && second > third)
	{
		sa(&stacks->stack_a);
		rra(&stacks->stack_a);
	}
	else if (first > second && second < third && first > third)
		ra(&stacks->stack_a);
	else if (first < second && second > third && first < third)
	{
		sa(&stacks->stack_a);
		ra(&stacks->stack_a);
	}
	else if (first < second && second > third && first > third)
		rra(&stacks->stack_a);
}

void	algo(t_stacks *stacks)
{
	int	size;
	int	window_size;

	size = ft_lstsize(stacks->stack_a);
	if (size <= 3)
		sort_three(stacks);
	else if (size <= 5)
		sort_five(stacks);
	else
	{
		if (size <= 100)
			window_size = ft_lstsize(stacks->stack_a) * 0.1;
		else
			window_size = ft_lstsize(stacks->stack_a) * 0.06;
		filling_b(stacks, window_size);
		sort_five(stacks);
		filling_a(stacks);
	}
}
