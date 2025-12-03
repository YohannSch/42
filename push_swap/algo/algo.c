/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:10:37 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/03 17:13:58 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	if_sort_five(t_stacks *stacks, int min_index, int *size)
{
	if (min_index <= *size / 2)
	{
		while (min_index > 0)
		{
			ra(&stacks->stack_a);
			min_index--;
		}
	}
	else
	{
		while (min_index < *size)
		{
			rra(&stacks->stack_a);
			min_index++;
		}
	}
	pb(&stacks->stack_a, &stacks->stack_b);
	(*size)--;
}

int	search_min_index(t_list *elem, int size)
{
	int	min_value;
	int	min_index;
	int	i;

	min_value = elem->value;
	min_index = 0;
	i = 0;
	while (i < size)
	{
		if (elem->value < min_value)
		{
			min_value = elem->value;
			min_index = i;
		}
		elem = elem->next;
		i++;
	}
	return (min_index);
}

void	sort_five(t_stacks *stacks)
{
	int	size;

	size = ft_lstsize(stacks->stack_a);
	while (size > 3)
		if_sort_five(stacks, search_min_index(stacks->stack_a, size), &size);
	sort_three(stacks);
	pa(&stacks->stack_a, &stacks->stack_b);
	pa(&stacks->stack_a, &stacks->stack_b);
}

// if (min_index <= size / 2)
// {
// 	while (min_index > 0)
// 	{
// 		ra(&stacks->stack_a);
// 		min_index--;
// 	}
// }
// else
// {
// 	while (min_index < size)
// 	{
// 		rra(&stacks->stack_a);
// 		min_index++;
// 	}
// }
// pb(&stacks->stack_a, &stacks->stack_b);
// size--;

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
