/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:09:45 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/04 02:44:46 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**create_tab_inputs(int argc, char **argv)
{
	char	**tab_inputs;
	int		i;

	i = 1;
	if (argc == 2)
	{
		tab_inputs = ft_split(argv[1], ' ');
	}
	else
	{
		tab_inputs = malloc(sizeof(char *) * argc);
		if (!tab_inputs)
			return (NULL);
		while (argv[i] != NULL)
		{
			tab_inputs[i - 1] = ft_strdup(argv[i]);
			if (!tab_inputs[i - 1])
				return (free_tab(tab_inputs), NULL);
			i++;
		}
		tab_inputs[i - 1] = NULL;
	}
	return (tab_inputs);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
