/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 00:28:30 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/03 17:25:13 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

long long int	*create_sorted_tab_utils(long long int *tab, int size)
{
	int				i;
	int				j;
	long long int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

long long int	*create_sorted_tab(long long int *tab_lli, int size)
{
	int				i;
	long long int	*tab;

	tab = malloc(sizeof(long long int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = tab_lli[i];
		i++;
	}
	tab = create_sorted_tab_utils(tab, size);
	return (tab);
}

int	check_duplicates(long long int *tab_lli, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab_lli[i] == tab_lli[j])
				return (parsing_failure);
			j++;
		}
		i++;
	}
	return (success);
}

int	check_valid_input(char *input)
{
	int	i;

	i = 0;
	if (input[0] == '-' || input[0] == '+')
		i++;
	if (input[i] == '\0')
		return (parsing_failure);
	while (input[i])
	{
		if (!ft_isdigit(input[i]))
			return (parsing_failure);
		i++;
	}
	return (success);
}
