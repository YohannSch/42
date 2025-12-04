/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:17:44 by yscheupl          #+#    #+#             */
/*   Updated: 2025/12/04 03:31:50 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stacks
{
	t_list		*stack_a;
	t_list		*stack_b;

}				t_stacks;

typedef struct s_push_swap
{
}				t_push_swap;

typedef enum e_errors
{
	success,
	parsing_failure,
}				t_errors;

void			free_tab(char **tab);
int				tablen(char **tab);
long long int	*create_sorted_tab(long long int *tab, int size);
char			**create_tab_inputs(int argc, char **argv);
long long int	*create_tab_lli(char **tab_inputs);
long long int	*create_index_sorted_tab(long long int *tab_lli, int size);
int				parsing(int argc, char **argv, t_stacks *stacks);
void			push_swap(int argc, char **argv);
int				check_duplicates(long long int *tab_lli, int size);
void			pa(t_list **head_a, t_list **head_b);
void			pb(t_list **head_a, t_list **head_b);
void			sa(t_list **head_a);
void			sb(t_list **head_b);
void			ss(t_list **head_a, t_list **head_b);
void			ra(t_list **head_a);
void			rb(t_list **head_b);
void			rr(t_list **head_a, t_list **head_b);
void			rra(t_list **head_a);
void			rrb(t_list **head_b);
void			rrr(t_list **head_a, t_list **head_b);
void			printlist(t_list *head);
void			sort_three(t_stacks *stacks);
void			sort_five(t_stacks *stacks);
void			algo(t_stacks *stacks);
void			filling_b(t_stacks *stacks, int window_size);
void			filling_a(t_stacks *stacks);
int				find_max_index(t_list *head);
int				check_valid_input(char *input);
void			free_list(t_list *head);

#endif