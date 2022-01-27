/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:58:45 by jofernan          #+#    #+#             */
/*   Updated: 2021/06/03 12:58:46 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux;
	unsigned char	*aux2;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	aux = dst;
	aux2 = (unsigned char *)src;
	while (i < n)
	{
		aux[i] = aux2[i];
		i++;
	}
	return (aux);
}
