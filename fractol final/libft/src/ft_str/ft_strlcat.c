/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:21:44 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 18:00:47 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	copy;

	cont = 0;
	copy = 0;
	while (dst[cont] && cont < dstsize)
		cont++;
	while (src[copy] && cont + copy + 1 < dstsize)
	{
		dst[cont + copy] = src[copy];
		copy++;
	}
	if (cont < dstsize)
		dst[cont + copy] = '\0';
	return (cont + ft_strlen(src));
}
