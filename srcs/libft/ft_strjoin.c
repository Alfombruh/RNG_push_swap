/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:59:29 by jofernan          #+#    #+#             */
/*   Updated: 2021/06/03 12:59:30 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*ptr;

	while (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		ptr = (char *)malloc(sizeof(char *) * (len1 + len2 + 1));
		if (ptr == 0)
			return (0);
		i = -1;
		while (s1[++i])
			ptr[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			ptr[len1] = s2[i];
			len1++;
		}
		ptr[len1] = '\0';
		return (ptr);
	}
	return (0);
}
