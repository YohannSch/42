/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:10:37 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/02 02:36:55 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	filling_b(t_stacks *stacks, int window_size)
{
	int	i;
	int size;
	
	size = ft_lstsize(stacks->stack_a);
	i = 0;
	while (size > 5)
	{
		if (stacks->stack_a->value > i + window_size)
		{
			ra(&stacks->stack_a);
			i++;
		}
		else if (stacks->stack_a->value < i)
		{
			pb(&stacks->stack_a, &stacks->stack_b);
			rb(&stacks->stack_b);
			i++;
			size--;
		}
		else
		{
			pb(&stacks->stack_a, &stacks->stack_b);
			i++;
			size--;
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

	size = ft_lstsize(stacks->stack_b);
	while (size > 0)
	{
		max_index = find_max_index(stacks->stack_b);
		if (max_index > size / 2)
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
		pa(&stacks->stack_a, &stacks->stack_b);	
		size--;
		if (stacks->stack_a->value > stacks->stack_a->prev->value)
		{
			rra(&stacks->stack_a);
			while (stacks->stack_a->value > stacks->stack_a->prev->value)
				rra(&stacks->stack_a);
		}
	}
}

void sort_five(t_stacks *stacks)
{
	int	size;

	size = ft_lstsize(stacks->stack_a);
	while (size > 3)
	{
		int	min_index = 0;
		t_list	*tmp = stacks->stack_a;
		int	min_value = tmp->value;
		int	index = 0;

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
void sort_three(t_stacks *stacks)
{
	int	first;
	int	second;
	int	third;

	first = stacks->stack_a->value;
	second = stacks->stack_a->next->value;
	third = stacks->stack_a->next->next->value;

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

void algo(t_stacks *stacks)
{
	int	size;

	size = ft_lstsize(stacks->stack_a);
	if (size <= 3)
		sort_three(stacks);
	else if (size <= 5)
		sort_five(stacks);
	else
	{
		int	window_size;

		if (size <= 100)
			window_size = 20;
		else
			window_size = 45;
		filling_b(stacks, window_size);
		sort_five(stacks);
		filling_a(stacks);
	}
}

