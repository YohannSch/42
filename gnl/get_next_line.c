/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:56:04 by yscheupl          #+#    #+#             */
/*   Updated: 2025/09/12 17:42:50 by yscheupl         ###   ########.fr       */
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
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
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

// Slight change: only one argument, returns up to '\n' or end
char	*fill_the_line(char *temp)
{
	int		len;
	char	*res;

	len = 0;
	if (!temp)
		return (NULL);
	while (temp[len] && temp[len] != '\n')
		len++;
	if (temp[len] == '\n')
		res = ft_substr(temp, 0, len + 1);
	else
		res = ft_substr(temp, 0, len);
	// include \n if present
	return (res);
}

char	*getting_the_line(int fd, char *buffer, char *temp)
{
	int		flag;
	char	*res;
	char	*newline_pos;
	char	*joined;
	int		i;

	flag = 1;
	res = NULL;
	// Check if temp already contains a newline
	newline_pos = ft_strchr(temp, '\n');
	while (flag > 0 && !newline_pos)
	{
		flag = read(fd, buffer, BUFFER_SIZE);
		if (flag == -1)
		{
			free(temp);
			return (NULL);
		}
		buffer[flag] = '\0';
		joined = ft_strjoin(temp, buffer);
		free(temp);
		temp = joined;
		newline_pos = ft_strchr(temp, '\n');
	}
	if (newline_pos) // found newline, normal case
	{
		res = fill_the_line(temp);
		// copy leftover to buffer
		i = 0;
		newline_pos++;
		while (*newline_pos)
			buffer[i++] = *newline_pos++;
		buffer[i] = '\0';
		free(temp);
		return (res);
	}
	else if (*temp) // EOF but temp has leftover data
	{
		res = ft_strdup(temp);
		buffer[0] = '\0'; // clear buffer for next call
		free(temp);
		return (res);
	}
	free(temp);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1] = {0};
	char *temp;
	char *res;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	temp = ft_strdup(buffer);
	if (!temp)
		return (NULL);

	res = getting_the_line(fd, buffer, temp);
	if (!res || !*res)
	{
		free(res);
		return (NULL);
	}
	return (res);
}