/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:24:03 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/23 17:59:59 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dcount(long int n)
{
	int	cont;

	cont = 0;
	while (n >= 10)
	{
		cont++;
		n /= 10;
	}
	return (cont + 1);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		n_copy;
	int				n_len;

	n_copy = n;
	if (n_copy < 0)
		n_copy *= -1;
	n_len = ft_dcount(n_copy);
	if (n < 0)
		n_len++;
	str = malloc((n_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[n_len--] = '\0';
	while (n_len >= 0)
	{
		str[n_len--] = (n_copy % 10) + '0';
		n_copy /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
