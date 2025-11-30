/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:32:28 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/01 00:29:13 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

char **create_tab_inputs(int argc, char **argv)
{
	char **tab_inputs;
	int i;
	
	i = 1;
	if (argc == 2){
		tab_inputs = ft_split(argv[1], ' ');
	}
	else 
	{
		tab_inputs = malloc(sizeof(char*)*argc);
		if (!tab_inputs)
			return(NULL);
		while (argv[i] != NULL){
			tab_inputs[i - 1] = ft_strdup(argv[i++]);
			if (!tab_inputs[i - 1])
				return(free_tab(tab_inputs), NULL);
		}
		tab_inputs[i - 1] = NULL;
	}
	return (tab_inputs);
}

long long int *create_tab_lli(char **tab_inputs)
{
	long long int *tab_lli;
	int size_tab;
	int i;
	
	i = 0;
	size_tab = tablen(tab_inputs);
	tab_lli = malloc(sizeof(long long int)* size_tab);
	if (!tab_lli)
		return(NULL);
	while (tab_inputs[i])
	{
		if (check_valid_input(tab_inputs[i]) != success)
			return (free(tab_lli), NULL);
		tab_lli[i] = ft_atoll(tab_inputs[i]);
		if (tab_lli[i] > INT_MAX || tab_lli[i] < INT_MIN)
			return (free(tab_lli), NULL);
		i++;
	}
	return (tab_lli);
}

long long int *create_index_sorted_tab(long long int *tab_lli, int size)
{
	long long int i;
	long long int j;
	long long int *tab_sorted;
	long long int *index_tab;
	
	tab_sorted = sort_lli_tab(tab_lli, size);
	if (!tab_sorted)
		return (free(tab_lli), NULL);
	i = 0;
	j = 0;
	index_tab = malloc(sizeof(long long int)* size);
	if (!index_tab)
		return (free(tab_sorted),free(tab_lli), NULL);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab_lli[i] == tab_sorted[j])
			{
				index_tab[i] = j;
			}
			j++;
		}
		i++;
	}
	return (free(tab_lli), free(tab_sorted), index_tab);
}

int parsing(int argc, char **argv, t_stacks *stacks)
{
	char **tab_inputs;
	long long int *tab_lli;
	
	tab_inputs = create_tab_inputs(argc, argv);
	if (tab_inputs == NULL)
		return(parsing_failure);
	tab_lli = create_tab_lli(tab_inputs);
	if (tab_lli == NULL)
		return(parsing_failure);
	tab_lli = create_index_sorted_tab(tab_lli, tablen(tab_inputs));
	if (tab_lli == NULL)
		return(parsing_failure);
	

}