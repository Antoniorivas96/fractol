/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:36:54 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 18:00:21 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*lstptr;

	if (!lst)
		return (0);
	cont = 1;
	lstptr = lst;
	while (lstptr->next)
	{
		cont++;
		lstptr = lstptr->next;
	}
	return (cont);
}
