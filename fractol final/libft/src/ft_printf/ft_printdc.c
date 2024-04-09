/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:33:58 by antonio           #+#    #+#             */
/*   Updated: 2023/12/26 18:02:53 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

static	int	ft_dcount(long	int nb)
{
	int	count;

	count = 0;
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count + 1);
}

int	ft_printdec(int n)
{
	long int	nb;

	nb = 0;
	ft_putnbr(n);
	if (n >= 0)
		return (ft_dcount(n));
	nb = (long int)n * -1;
	return (ft_dcount(nb) + 1);
}
