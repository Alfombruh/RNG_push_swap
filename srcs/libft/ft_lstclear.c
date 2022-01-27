/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:23:44 by jofernan          #+#    #+#             */
/*   Updated: 2021/06/04 12:23:45 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	if (!del || !lst || !*lst)
		return ;
	while (*lst && lst)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}	
}
