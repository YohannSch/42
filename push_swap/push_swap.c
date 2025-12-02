/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:17:38 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/02 00:52:37 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.stack_b = NULL;
	if (parsing(argc, argv, &stacks) != 0)
		return (ft_putendl_fd("Error", 1));
	algo(&stacks);
	printlist(stacks.stack_a);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		push_swap(argc, argv);
	else
		ft_putendl_fd("Error", 1);
	return (0);
}