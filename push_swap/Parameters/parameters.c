/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:32:28 by yscheupl          #+#    #+#             */
/*   Updated: 2025/10/22 00:59:49 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

int *parameters(int argc, char **argv)
{
	char **tab_str;
	int *tab_int;
	int i;
	
	i = 0;
	if (argc = 2)
	{
	tab_str = ft_split(argv[2],' ');
	if (reviewer = 1)
		return (ft_putendl_fd("Error", 1), NULL)
	while (tab_str)
		ft_atoll(tab_str[i++]);
	}
	else if (argc > 2)
	 //traitement des nombres en parametres
}