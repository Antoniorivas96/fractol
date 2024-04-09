/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:57:14 by anrivas-          #+#    #+#             */
/*   Updated: 2023/10/18 16:37:31 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		cont;
	char	*str;

	if (!s || !f)
		return (0);
	cont = ft_strlen(s);
	str = malloc((cont + 1) * sizeof(char));
	if (!str)
		return (0);
	cont = 0;
	while (s[cont])
	{
		str[cont] = f(cont, s[cont]);
				cont++;
	}
	str[cont] = '\0';
	return (str);
}
