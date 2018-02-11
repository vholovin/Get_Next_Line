/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:02:46 by vholovin          #+#    #+#             */
/*   Updated: 2017/03/02 14:23:17 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int a, char **b)
{
	int		fd1;
	int		fd2;
	int		fd3;
	char	*line1;
	char	*line2;
	char	*line3;

	if (a < 2)
		return (1);
	fd1 = open(b[1], O_RDONLY);
	fd2 = open(b[2], O_RDONLY);
	fd3 = open(b[3], O_RDONLY);
	printf("fd_1 %d  fd_2 %d  fd_3 %d\n", fd1, fd2, fd3);
/*
	printf("___\n");
	while (get_next_line(fd1, &line1) == 1)
		printf("gnl_1 %s\n", line1);
	printf("___\n");
	while (get_next_line(fd2, &line2) == 1)
		printf("gnl_2 %s\n", line2);
	printf("___\n");
	while (get_next_line(fd3, &line3) == 1)
		printf("gnl_3 %s\n", line3);
	printf("___\n");
*/
	printf("gnl_1 %d %s\n", get_next_line(fd1, &line1), line1);
	printf("gnl_2 %d %s\n", get_next_line(fd2, &line2), line2);
	printf("gnl_3 %d %s\n", get_next_line(fd3, &line3), line3);
	printf("gnl_1 %d %s\n", get_next_line(fd1, &line1), line1);
	printf("gnl_2 %d %s\n", get_next_line(fd2, &line2), line2);
	printf("gnl_3 %d %s\n", get_next_line(fd3, &line3), line3);
	printf("gnl_1 %d %s\n", get_next_line(fd1, &line1), line1);
	printf("gnl_2 %d %s\n", get_next_line(fd2, &line2), line2);
	printf("gnl_3 %d %s\n", get_next_line(fd3, &line3), line3);

	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
