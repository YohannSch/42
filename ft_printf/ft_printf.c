/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:03:11 by yscheupl          #+#    #+#             */
/*   Updated: 2025/06/28 12:46:42 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(args, (str[i + 1]));
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	return (len);
}

int	ft_format(va_list args, const char c)
{
	int	count ;

	count = 0;
	if (c == 'c')
		count = ft_printchar(va_arg(args, int));
	else if (c == 's')
		count = ft_printstr(va_arg(args, char *));
	else if (c == 'p')
		count = ft_printptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		count = ft_printnbr(va_arg(args, int), &count);
	else if (c == 'u')
		count = ft_printunbr(va_arg(args, unsigned int), &count);
	else if (c == 'x')
		count = ft_printhex(va_arg(args, unsigned int), "0123456789abcdef", 0);
	else if (c == 'X')
		count = ft_printhex(va_arg(args, unsigned int), "0123456789ABCDEF", 0);
	else if (c == '%')
		count = ft_printchar('%');
	return (count);
}

// int	main(void)
// {
// 	int		nb;
// 	char	str[] = "leonel est content\n";
// 	char	*strnull;

// 	nb = 2147;
// 	strnull = NULL;
// 	printf("%d\n", printf("int is :%d\n", -nb));
// 	printf("my printf :%d\n", ft_printf("int is :%d\n", -nb));
// 	printf("------------------\n");
// 	printf("%d\n", printf("int is :%i\n", -nb));
// 	printf("my printf :%d\n", ft_printf("int is :%i\n", -nb));
// 	printf("------------------\n");
// 	printf("%d\n", printf("int is :%u\n", -nb));
// 	printf("my printf :%d\n", ft_printf("int is :%u\n", -nb));
// 	printf("------------------\n");
// 	printf("%d\n", printf("str is :%s", str));
// 	printf("my printf :%d\n", ft_printf("str is :%s", str));
// 	printf("------------------\n");
// 	printf("%d\n", printf("char is :%c\n", str[0]));
// 	printf("my printf :%d\n", ft_printf("char is :%c\n", str[0]));
// 	printf("------------------\n");
// 	printf("%d\n", printf("HEXA is %X\n", -nb));
// 	printf("my printf :%d\n", ft_printf("HEXA is %X\n", -nb));
// 	printf("------------------\n");
// 	printf("%d\n", printf("hexa is %x\n", -nb));
// 	printf("my printf :%d\n", ft_printf("hexa is %x\n", -nb));
// 	printf("------------------\n");
// 	printf("%d\n", printf("percent is %%\n"));
// 	printf("my printf :%d\n", ft_printf("percent is %%\n"));
// 	printf("------------------\n");
// 	printf("%d\n", printf("pointer is %p\n", &str));
// 	printf("my printf :%d\n", ft_printf("pointer is %p\n", &str));
// 	printf("------------------\n");
// 	printf("%d\n", printf("%s\n", strnull));
// 	printf("my printf :%d\n", ft_printf("%s\n", strnull));
// 	printf("------------------\n");
// 	printf("%d\n", printf("%p\n", NULL));
// 	printf("my printf :%d\n", ft_printf("%p\n", NULL));
// 	printf("------------------\n");
// 	printf("%d\n", printf("juste du texte\n"));
// 	printf("my printf :%d\n", ft_printf("juste du texte\n"));
// 	printf("------------------\n");
// 	printf("%d\n", printf(strnull));
// 	printf("my printf :%d\n", ft_printf(strnull));
// 	printf("------------------\n");
// }