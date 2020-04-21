/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrillebertola <cyrillebertola@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 14:21:44 by cyrillebert       #+#    #+#             */
<<<<<<< HEAD:ft_replace.c
/*   Updated: 2020/04/20 16:36:58 by cbertola         ###   ########.fr       */
=======
/*   Updated: 2020/04/08 20:03:11 by cyrillebe        ###   ########.fr       */
>>>>>>> 265af25aaeb7a3c56fdb2176d43cbc674f340a8e:printf/libft/ft_strdup.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_replace(char *str, char out, char in)
{
	int		i;
	char	*ptr;

	if (!(ptr = malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == out)
			ptr[i] = in;
		else
			ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
