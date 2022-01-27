/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:58:35 by jofernan          #+#    #+#             */
/*   Updated: 2021/06/03 12:58:36 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	unsigned char	a;
	size_t			i;

	i = 0;
	aux = (unsigned char *) s;
	a = (unsigned char) c;
	while (i < n)
	{
		if (aux[i] == a)
			return (&aux[i]);
		i++;
	}
	return (NULL);
}
