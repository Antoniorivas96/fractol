/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:57:42 by anrivas-          #+#    #+#             */
/*   Updated: 2024/04/09 17:43:16 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	instructions(void)
{
	ft_printf("\nbienvenidx a fractal\n");
	ft_printf("\nPara moverlo Presiona las teclas: W, A, S, D o flechas\n");
	ft_printf("Para hacer zoom: Gira la rueda del ratón hacia arriba\n");
	ft_printf("Para hacer zoom hacia atrás: Gira la rueda hacia abajo\n");
	ft_printf("Para cambiar los colores: Presiona la Barra espaciadora\n");
	ft_printf("Para aumentar las iteraciones: Presiona la tecla: +\n");
	ft_printf("Para disminuir las iteraciones: Presiona la tecla: -\n");
	ft_printf("Para rotar Julia: Haz clic izquierdo o derecho en el ratón\n");
	ft_printf("Para salir: Presiona la tecla: ESC\n");
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
