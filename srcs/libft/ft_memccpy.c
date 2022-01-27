/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:58:28 by jofernan          #+#    #+#             */
/*   Updated: 2021/06/03 12:58:29 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*aux;
	unsigned char	*aux2;
	size_t			i;

	i = 0;
	aux = (unsigned char *)dst;
	aux2 = (unsigned char *)src;
	while (i < n && aux2[i] != (unsigned char)c)
	{
		aux[i] = aux2[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		aux[i] = aux2[i];
		i++;
	}
	return (&aux[i]);
}
