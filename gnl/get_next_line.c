/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:56:04 by yscheupl          #+#    #+#             */
/*   Updated: 2025/08/27 18:26:23 by yscheupl         ###   ########.fr       */
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

char	*fill_the_line(char *retour, char *temp)
{
	int		len;
	char	*res;
	
	len = ft_strlen(temp) - ft_strlen(retour);
	res = ft_substr(temp, 0, len);
	return (res);
}

char	*getting_the_line(int fd, char *buffer, char *temp)
{
	int		flag;
	char	*res;
	char *i;
	
	flag = 1;
	if(ft_strchr(temp, '\n') != NULL)
		flag = -2;
	while (flag > 0)
	{
		flag = read(fd, buffer, BUFFER_SIZE);
		temp = ft_strjoin(temp, buffer);
		if(ft_strchr(temp, '\n') != NULL)
		{
			flag = -2;
			break;
		}
		if (flag == -1)
		{
			return (NULL);
		}
		if (flag < BUFFER_SIZE && flag >= 0)
		{
		res = ft_strdup(temp);
		return (res);
		}
	}
	if (flag == -2)
	{
		res = fill_the_line(ft_strchr(temp, '\n') + 1, temp);
		strcpy(buffer, ft_strchr(temp, '\n') + 1);
		return (res);
	}
	// strcpy(buffer, ft_strchr(temp, '\n') + 1);
	return (res);
}

char *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char	*temp;
	char * res;
	
	temp = malloc(100000);
	res = malloc(100000);
	if (!temp)
		return (NULL);
	if (!res)
		return (NULL);
	temp = ft_strdup(buffer);
	res = getting_the_line(fd, buffer, temp);
	return (res);
}
