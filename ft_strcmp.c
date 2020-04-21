/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrillebertola <cyrillebertola@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 10:44:28 by cyrillebert       #+#    #+#             */
<<<<<<< HEAD:ft_strcmp.c
/*   Updated: 2020/04/20 16:37:13 by cbertola         ###   ########.fr       */
=======
/*   Updated: 2020/04/08 20:01:58 by cyrillebe        ###   ########.fr       */
>>>>>>> 265af25aaeb7a3c56fdb2176d43cbc674f340a8e:printf/libft/ft_isfind.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
