/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:08:38 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 18:08:41 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			cont;
	unsigned char	*ptrstr;

	cont = 0;
	ptrstr = (unsigned char *)str;
	while (cont < n)
	{
		if (ptrstr[cont] == (unsigned char)c)
			return (&ptrstr[cont]);
		cont++;
	}
	return (0);
}
