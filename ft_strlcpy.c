/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrillebertola <cyrillebertola@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:13:04 by cbertola          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/04/20 16:36:09 by cbertola         ###   ########.fr       */
=======
/*   Updated: 2020/04/09 13:51:50 by cyrillebert      ###   ########.fr       */
>>>>>>> 265af25aaeb7a3c56fdb2176d43cbc674f340a8e
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize <= 0 && (!src || !dst))
		return (ft_strlen((char *)src));
	while (src[j])
		j++;
	if (j + 1 < dstsize)
		ft_memcpy(dst, src, j + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
		i++;
	}
	return (j);
}
