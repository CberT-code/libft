/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:47:44 by cbertola          #+#    #+#             */
/*   Updated: 2020/04/09 12:43:23 by cyrillebe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include	<sys/types.h>
# include	<sys/uio.h>
# include	<fcntl.h>
# include	<stdlib.h>
# include	<stdio.h>
# include	<unistd.h>
# define	BUFFER_SIZE 50
typedef struct	s_list
{
	int				fd;
	char			*buff;
	char			*str;
	int				read;
	struct s_list	*next;
}				t_list;

int				get_next_line(int fd, char **line);
void			ft_del(t_list **lst_one);
int				ft_exist(t_list **lst_one, char **line);
int				search_fd(t_list **lst_one, int fd);
int				ft_find(char *str, char stop);
char			*ft_send(t_list **lst, char **line);
char			*ft_before_char(char *str, char stop);
char			*ft_strjoin(char *s1, char *s2);
int				ft_strlen(char *str);
void			ft_new_lst(int fd, t_list **lst_one);
#endif
