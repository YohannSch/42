/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:17:38 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/04 03:30:58 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_list(t_list *head)
{
	t_list	*tmp;
	t_list	*next;

	tmp = head;
	int i = ft_lstsize(head);
	while (i-- > 0)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}

void	push_swap(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.stack_b = NULL;
	if (parsing(argc, argv, &stacks) != 0)
	{
		ft_putendl_fd("Error", 2);
		return ;
	}
	algo(&stacks);
	free_list(stacks.stack_a);
}

int	main(int argc, char **argv)
{
	if (argc > 1 && argv[1][0] != '\0')
		push_swap(argc, argv);
	else if (argc > 1 && argv[1][0] == '\0')
		ft_putendl_fd("Error", 2);
	return (0);
}
