/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 17:07:57 by tide-jon       #+#    #+#                */
/*   Updated: 2019/04/12 15:03:09 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main()
{
	int		fd;
	char	*line;
	int		ret;
	int		i;

	i = 0;
	fd = open("text", O_RDONLY);
	ret = 1;
	while (ret == 1)
	{
		ret = get_next_line((const int)fd, &line);
		if (ret == 1)
		{
			printf("%i%c%s\n", ret, ' ', line);
			free(line);
		}
		i++;
	}
	return (0);
}
