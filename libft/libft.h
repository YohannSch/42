/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:48:31 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/05 12:48:48 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>
# include <string.h>
# include <stdarg.h>

# define UL unsigned long long
# define HEXAL "0123456789abcdef"
# define HEXAU "0123456789ABCDEF"
# define B10 "0123456789"

// write functions
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// malloc string functions
char	*ft_strjoin(char const *s1, char const *s2);

// string functions
size_t	ft_strlen(char const *str);

// is char functions
int	isalpha(int c);
int	isalnum(int c);
int	isascii(int c);
int	isdigit(int c);
int	isprint(int c);

// char modification functions
int	toupper(int c);
int tolower(int c);

// mem functions
void    *ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif