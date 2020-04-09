/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrillebertola <cyrillebertola@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:30:10 by cbertola          #+#    #+#             */
/*   Updated: 2020/04/09 13:54:31 by cyrillebert      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			search_fd(t_gnl **lst_one, int fd)
{
	t_gnl		*first;
	t_gnl		*front;

	if (!*lst_one)
		return (0);
	first = *lst_one;
	front = NULL;
	if ((*lst_one)->fd == fd)
		return (1);
	while ((*lst_one)->next != 0)
	{
		if ((*lst_one)->next->fd == fd)
		{
			front = (*lst_one)->next;
			(*lst_one)->next = (*lst_one)->next->next;
			front->next = *lst_one;
			*lst_one = front;
			return (1);
		}
		*lst_one = (*lst_one)->next;
	}
	*lst_one = first;
	return (0);
}

void		ft_new_lst(int fd, t_gnl **lst_one)
{
	t_gnl	*lst;

	if (!(lst = malloc(sizeof(t_gnl))))
		return ;
	lst->fd = fd;
	lst->next = *lst_one ? *lst_one : 0;
	lst->str = NULL;
	*lst_one = lst;
}

void		ft_del(t_gnl **lst_one)
{
	t_gnl		*lst;

	lst = (*lst_one)->next;
	free(*lst_one);
	*lst_one = lst;
}

int			ft_exist(t_gnl **lst, char **line)
{
	if (!(*lst)->buff && !(*lst)->str)
		return (-1);
	if ((*lst)->buff)
	{
		(*lst)->str = ft_strjoin_free((*lst)->str, (*lst)->buff);
		(*lst)->buff = NULL;
	}
	if (ft_finded((*lst)->str, '\n'))
	{
		(*lst)->str = ft_send(lst, line);
		return (1);
	}
	if ((*lst)->read < BUFFER_SIZE)
	{
		*line = (*lst)->str;
		ft_del(lst);
		return (0);
	}
	return (get_next_line((*lst)->fd, line));
}

int			get_next_line(int fd, char **line)
{
	int				retour;
	static t_gnl	*lst_one;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (-1);
	if (search_fd(&lst_one, fd))
	{
		if (ft_finded(lst_one->str, '\n') || lst_one->read < BUFFER_SIZE)
			return (ft_exist(&lst_one, line));
	}
	else
		ft_new_lst(fd, &lst_one);
	if (!(lst_one->buff = malloc(BUFFER_SIZE * sizeof(char) + 1)))
		return (-1);
	if ((lst_one->read = read(fd, lst_one->buff, BUFFER_SIZE)) == -1)
		return (-1);
	lst_one->buff[lst_one->read] = '\0';
	retour = ft_exist(&lst_one, line);
	return (retour);
}
