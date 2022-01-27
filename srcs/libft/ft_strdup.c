/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:59:25 by jofernan          #+#    #+#             */
/*   Updated: 2021/06/03 12:59:26 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char	*dest, const char	*src)
{
	int	count;

	count = 0;
	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	len = 0;
	while (s1[len])
		len++;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	ft_strcpy(ptr, s1);
	return (ptr);
}
