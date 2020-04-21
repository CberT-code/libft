/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrillebertola <cyrillebertola@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:47:26 by cbertola          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/04/20 16:36:33 by cbertola         ###   ########.fr       */
=======
/*   Updated: 2020/04/09 13:52:55 by cyrillebert      ###   ########.fr       */
>>>>>>> 265af25aaeb7a3c56fdb2176d43cbc674f340a8e
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*ptr;
	int					i;
	unsigned long int	u;

	i = -1;
	if (!(s))
		return (NULL);
	u = ft_strlen((char *)s);
	if (start > u)
		len = 0;
	if (!(ptr = malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (s[start] && len--)
		ptr[++i] = s[start++];
	ptr[++i] = '\0';
	return (ptr);
}
