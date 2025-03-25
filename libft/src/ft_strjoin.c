/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:16:23 by yscheupl          #+#    #+#             */
/*   Updated: 2025/03/25 12:27:38 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*res;
	int		i;
    int     j;

	i = 0;
    j = 0;
	res = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
        j++;
	}
	res[i] = '\0';
	return (res);
}

// int main(int argc, char const *argv[])
// {
// 	if (argc == 3)
// 	{
// 		printf("%s\n", ft_strjoin(argv[1], argv[2]));
// 	}
// 	return 0;
// }