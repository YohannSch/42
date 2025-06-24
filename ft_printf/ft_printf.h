/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:42:33 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/24 18:14:56 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int ft_format(va_list args, const char c);
int ft_printf(const char *str, ...);
int ft_printhex(unsigned long long nbr, char *base, int i);
int ft_printchar(char c);
int ft_printstr(char *s);
int ft_printptr(unsigned long long ptr);
int ft_printnbr(int n);
int ft_printunbr(unsigned int n);


#endif