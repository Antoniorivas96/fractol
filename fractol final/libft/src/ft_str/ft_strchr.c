/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:33:47 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 18:00:41 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if ((!*str && (char)c == '\0'))
		return ((char *)str);
	while (*str != '\0')
	{
		if (*str == (char) c)
			return ((char *) str);
		str++;
		if (*str == (char) c)
			return ((char *) str);
	}
	return (0);
}
