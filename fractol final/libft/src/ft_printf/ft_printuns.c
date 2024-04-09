/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:16:26 by antonio           #+#    #+#             */
/*   Updated: 2023/12/26 18:02:53 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int uns)
{
	int	cont;

	cont = 0;
	if (uns >= 10)
	{
		cont += ft_printunsigned(uns / 10);
	}
	ft_printchar(uns % 10 + '0');
	cont++;
	return (cont);
}
