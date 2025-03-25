/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:48:31 by yscheupl          #+#    #+#             */
/*   Updated: 2025/03/25 11:37:01 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>

// write functions
void ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

// malloc string functions
char *ft_strjoin(char const *s1, char const *s2);

#endif