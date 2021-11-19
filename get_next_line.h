/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 15:30:00 by tide-jon       #+#    #+#                */
/*   Updated: 2019/04/16 17:58:55 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# define BUFF_SIZE 20

typedef struct	s_gnl_list
{
	int					fd;
	char				*content;
	struct s_gnl_list	*next;
}				t_gnl_list;

int				get_next_line(const int fd, char **line);

#endif
