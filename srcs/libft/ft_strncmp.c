/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:59:48 by jofernan          #+#    #+#             */
/*   Updated: 2021/06/03 12:59:49 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)(s2 - 1));
		if (*s1++ == '\0')
			break ;
		n--;
	}
	return (0);
}
