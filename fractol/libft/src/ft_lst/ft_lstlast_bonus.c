/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:21:12 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 18:00:13 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstptr;

	if (!lst)
		return (0);
	lstptr = lst;
	while (lstptr ->next)
		lstptr = lstptr->next;
	return (lstptr);
}
