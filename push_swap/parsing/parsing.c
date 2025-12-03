/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:32:28 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/03 17:10:08 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long int	*create_tab_lli(char **tab_inputs)
{
	long long int	*tab_lli;
	int				size_tab;
	int				i;

	i = 0;
	size_tab = tablen(tab_inputs);
	tab_lli = malloc(sizeof(long long int) * size_tab);
	if (!tab_lli)
		return (NULL);
	while (tab_inputs[i])
	{
		if (check_valid_input(tab_inputs[i]) != success)
			return (free(tab_lli), NULL);
		tab_lli[i] = ft_atoll(tab_inputs[i]);
		if (tab_lli[i] > INT_MAX || tab_lli[i] < INT_MIN)
			return (free(tab_lli), NULL);
		i++;
	}
	if (check_duplicates(tab_lli, size_tab) != success)
		return (free(tab_lli), NULL);
	return (tab_lli);
}

long long int	*create_index_sorted_tab(long long int *tab_lli, int size)
{
	long long int	i;
	long long int	j;
	long long int	*tab_sorted;
	long long int	*index_tab;

	tab_sorted = create_sorted_tab(tab_lli, size);
	if (!tab_sorted)
		return (free(tab_lli), NULL);
	i = 0;
	index_tab = malloc(sizeof(long long int) * size);
	if (!index_tab)
		return (free(tab_sorted), free(tab_lli), NULL);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab_lli[i] == tab_sorted[j])
				index_tab[i] = j;
			j++;
		}
		i++;
	}
	return (free(tab_lli), free(tab_sorted), index_tab);
}

// void	printlist(t_list *head)
// {
// 	t_list	*tmp;
// 	int		i;

// 	i = 0;
// 	tmp = head;
// 	if (head == NULL)
// 		return ;
// 	while (i < ft_lstsize(head))
// 	{
// 		printf("Value at index %d: %d\n", i, tmp->value);
// 		tmp = tmp->next;
// 		i++;
// 	}
// }

int	fill_list(t_list *head, long long int *tab_lli, int size)
{
	int		i;
	t_list	*tmp;

	i = 1;
	while (i < size)
	{
		tmp = ft_lstnew(tab_lli[i]);
		if (tmp == NULL)
			return (parsing_failure);
		ft_lstadd(tmp, head);
		i++;
	}
	return (success);
}

int	is_sorted(char **tab_inputs)
{
	int	i;

	i = 0;
	while (tab_inputs[i + 1])
	{
		if (ft_atoll(tab_inputs[i]) > ft_atoll(tab_inputs[i + 1]))
			return (parsing_failure);
		i++;
	}
	return (success);
}

int	parsing(int argc, char **argv, t_stacks *stacks)
{
	char			**tab_inputs;
	long long int	*tab_lli;

	tab_inputs = create_tab_inputs(argc, argv);
	if (tab_inputs == NULL)
		return (parsing_failure);
	if (is_sorted(tab_inputs) == success)
	{
		free_tab(tab_inputs);
		return (parsing_failure);
	}
	tab_lli = create_tab_lli(tab_inputs);
	if (tab_lli == NULL)
		return (parsing_failure);
	tab_lli = create_index_sorted_tab(tab_lli, tablen(tab_inputs));
	if (tab_lli == NULL)
		return (parsing_failure);
	stacks->stack_a = ft_lstnew(tab_lli[0]);
	if (fill_list(stacks->stack_a, tab_lli,
			tablen(tab_inputs)) == parsing_failure)
		return (parsing_failure);
	return (success);
}
