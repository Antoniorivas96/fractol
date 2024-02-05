/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:47:11 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 18:00:54 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while ((s1[cont] || s2[cont]) && cont < n)
	{
		if (s1[cont] != s2[cont])
			return ((unsigned char) s1[cont] - (unsigned char) s2[cont]);
		cont++;
	}
	return (0);
}
