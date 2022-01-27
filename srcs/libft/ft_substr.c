/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:24:36 by jofernan          #+#    #+#             */
/*   Updated: 2021/06/04 12:24:37 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	length;
	size_t	index;

	if (!(s))
		return (0);
	length = ft_strlen(s);
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (0);
	index = 0;
	while (index < len && index + start < length)
	{
		str[index] = s[start + index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
