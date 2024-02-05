/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:08:47 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 18:00:49 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	src_len;

	cont = 0;
	src_len = ft_strlen((char *)src);
	if (dstsize)
	{
		while (src[cont] && cont < dstsize -1)
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	return (src_len);
}
