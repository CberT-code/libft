/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tab_full.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 23:25:47 by cbertola          #+#    #+#             */
<<<<<<< HEAD:is_tab_full.c
/*   Updated: 2020/04/20 16:36:39 by cbertola         ###   ########.fr       */
=======
/*   Updated: 2020/01/27 00:10:02 by cbertola         ###   ########.fr       */
>>>>>>> 265af25aaeb7a3c56fdb2176d43cbc674f340a8e:printf/libft/ft_putchar_int.c
/*                                                                            */
/* ************************************************************************** */

int		is_tab_full(char *tab, char c)
{
	int i;

	i = 0;
	while (tab[i])
		if (tab[i++] != c)
			return (0);
	return (1);
}
