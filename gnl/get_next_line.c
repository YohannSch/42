/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:56:04 by yscheupl          #+#    #+#             */
/*   Updated: 2025/07/08 19:02:37 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

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

char *get_next_line(int fd)
{
	char	*buffer;
	static char	*ligne;
	
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (NULL);
	getting_the_line(fd, buffer, ligne)
}

char	*getting_the_line(int fd, char *buffer, static char *ligne)
{
	int		flag;
	char	*res;
	
	flag = 1;
	while (flag > 0)
	{
		flag = read(fd, (void*)buffer, BUFFER_SIZE);
		ft_strjoin(ligne, buffer)
		if(ft_strrchr(ligne, '\n') != NULL)
			flag = -1;
	}
	res = fill_the_line(ft_strrchr(ligne, '\n'), ligne);
	&ligne = ft_strrchr(ligne, '\n') + 1;
	return (res)
}

char	*fill_the_line(char *retour, static char *ligne)
{
	int		len;
	char	*res;
	
	len = ft_strlen(ligne) - ft_strlen(retour)
	res = ft_substr(ligne, 0, len);
	return (res)
}