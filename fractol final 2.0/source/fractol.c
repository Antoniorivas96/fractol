/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:32:47 by anrivas-          #+#    #+#             */
/*   Updated: 2024/04/12 14:47:42 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_leaks(void)
{
	system("leaks -q fractol");
}

int	main(int argc, char **argv)
{
	t_fractol	fract;
	atexit(ft_leaks);
	if ((argc == 2 && !ft_strncmp(argv[1], \
	"mandelbrot", ft_strlen("mandelbrot") + 1))
		|| (argc == 4 && !ft_strncmp(argv[1], "julia", ft_strlen("julia") + 1)))
	{
		instructions();
		argv[1][0] = ft_toupper(argv[1][0]);
		fract.title = argv[1];
		if (!ft_strncmp(fract.title, "julia", 5))
		{
			fract.julia_r = atod(argv[2]);
			fract.julia_i = atod(argv[3]);
		}
		fractol_init(&fract);
		fractol_render(&fract);
		mlx_loop(fract.mlx_connect);
		return (0);
	}
	ft_printf("pasa imputs validos\nTry:\n");
	ft_printf("<./fractol mandelbrot> or\n<./fractol julia -0.4 +0.6>");
	ft_printf(" or\n<./fractol julia -0.835 -0.2321>\n");
	exit(EXIT_FAILURE);
}
