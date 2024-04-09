/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:32:37 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 18:00:59 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	cont;
	size_t	len;

	cont = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	if (s1[cont] == '\0' && len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[cont]))
		cont++;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, cont, len - cont + 1));
}
