/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:57:42 by anrivas-          #+#    #+#             */
/*   Updated: 2024/01/31 17:31:40 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	instructions(void)
{
	ft_printf("\nWelcome to the fractal exploration!\nSadly, MiniLibX's limited capabilities result in slow rendering 😞\n");
	ft_printf("\nTo move the fractal:	Press keys: W, A, S, D or Left, Right, Up, Down arrows\n");
	ft_printf("To zoom in:		Scroll mouse wheel up\n");
	ft_printf("To zoom out:		Scroll mouse wheel down\n");
	ft_printf("To switch colours:	Press: Space bar\n");
	ft_printf("To increase iterations:	Press key: + (from the number pad)\n");
	ft_printf("To decrease iterations:	Press key: -\n");
	ft_printf("To rotate Julia:	Mouse left or right click\n");
	ft_printf("To quit:		Press key: ESC or click X on window, or ^C on command line\n");
	ft_printf("\nTry: <./fractal julia -0.4 +0.6> or <./fractol julia -0.835 -0.2321>\n");
	ft_printf("\nWARNING: Attempting to resize or maximize the window will lose you to the black abyss!\n");
}

void	malloc_error(void)
{
	ft_printf("Malloc error\n");
	exit(EXIT_FAILURE);
}
void	zoom_in(t_fractol *fract, double mouse_r, double mouse_i)
{
	double	zoom_factor;

	zoom_factor = 0.95;
	fract->shift_r += (mouse_r - fract->shift_r) * (1 - zoom_factor);
	fract->shift_i += (mouse_i - fract->shift_i) * (1 - zoom_factor);
	fract->zoom *= zoom_factor;
}

void	zoom_out(t_fractol *fract, double mouse_r, double mouse_i)
{
	double	zoom_factor;

	zoom_factor = 1.01;
	fract->shift_r += (mouse_r - fract->shift_r) * (1 - zoom_factor);
	fract->shift_i += (mouse_i - fract->shift_i) * (1 - zoom_factor);
	fract->zoom *= zoom_factor;
}