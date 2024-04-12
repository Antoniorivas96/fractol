/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colours.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:31:32 by anrivas-          #+#    #+#             */
/*   Updated: 2024/04/09 17:54:29 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	blend_colours(int colour1, int colour2, double t)
{
	int		r;
	int		g;
	int		b;

	r = (int)((1 - t) * ((colour1 >> 16) & 0xFF) \
	+ t * ((colour2 >> 16) & 0xFF) * 5);
	g = (int)((1 - t) * ((colour1 >> 8) & 0xFF) + t * \
	((colour2 >> 8) & 0xFF) * 5);
	b = (int)((1 - t) * (colour1 & 0xFF) + t * (colour2 & 0xFF) * 5);
	r = (int)(r + (255 - r) * t * 1.5);
	g = (int)(g + (255 - g) * t * 0.2);
	b = (int)(b + (255 - b) * t * 4);
	return ((r << 16) | (g << 8) | b);
}

void	colour_shift(t_fractol *fract)
{
	static int	colours[] = {WHITE, PASTELPINK, GREEN, BLUE, MAGENTA, LIME, \
	ORANGE, PURPLE, AQUA, PINK, ELECTRIC, \
	LIGHTENING, LAVA, YELLOW, PASTELYELLOW};
	static int	colour_index = 0;

	colour_index = (colour_index + 1) % (sizeof(colours) / sizeof(colours[0]));
	fract->current_colour = colours[colour_index];
	fractol_render(fract);
}
