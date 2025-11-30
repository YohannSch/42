/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:17:44 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/01 00:30:43 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

typedef struct s_stacks
{
	t_list	*stack_a;
	t_list	*stack_b;

}	t_stacks;

typedef struct s_push_swap
{
	
}	t_push_swap;

typedef enum e_errors
{
	success,
	parsing_failure,
}	t_errors;

static void	free_tab(char **tab);
int tablen(char **tab);
void	ft_sort_lli_tab(long long int *tab, int size);
char **create_tab_inputs(int argc, char **argv);
long long int *create_tab_lli(char **tab_inputs);
long long int *create_index_sorted_tab(long long int *tab_lli, int size);
int parsing(int argc, char **argv, t_stacks *stacks);
void push_swap(int argc, char **argv);