/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrillebertola <cyrillebertola@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:44:25 by cbertola          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/04/20 16:36:46 by cbertola         ###   ########.fr       */
=======
/*   Updated: 2020/04/09 13:55:33 by cyrillebert      ###   ########.fr       */
>>>>>>> 265af25aaeb7a3c56fdb2176d43cbc674f340a8e
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				u;
	unsigned int	i;
	char			*ptr;

	if (!(s))
		return (NULL);
	u = ft_strlen((char *)s);
	i = 0;
	if (!(ptr = malloc(u * sizeof(char) + 1)))
		return (NULL);
	while (*s)
	{
		ptr[i] = (*f)(i, *s++);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
