/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:52:41 by yscheupl          #+#    #+#             */
/*   Updated: 2025/08/27 17:58:00 by yscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
	int fd;
	int i = 0;
	fd = open("fichier.txt", O_RDONLY);
	char *line;
	line = get_next_line(fd);
	printf("%s", line);
	while(line)
	{
		free(line);
		line = get_next_line(fd);
		printf("%s", line);
	}
	return (0);
}