/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrillebertola <cyrillebertola@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:27:36 by cbertola          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/04/20 16:36:15 by cbertola         ###   ########.fr       */
=======
/*   Updated: 2020/04/09 13:53:34 by cyrillebert      ###   ########.fr       */
>>>>>>> 265af25aaeb7a3c56fdb2176d43cbc674f340a8e
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	long int	u;
	long int	v;
	long int	i;

	if (!(s1 && s2))
		return (NULL);
	u = ft_strlen((char *)s1);
	v = ft_strlen((char *)s2);
	i = -1;
	if (!(ptr = malloc((u + v) * (sizeof(char) + 1))))
		return (NULL);
	while (*s1)
		ptr[++i] = (char)*s1++;
	while (*s2)
		ptr[++i] = (char)*s2++;
	ptr[++i] = '\0';
	return (ptr);
}
