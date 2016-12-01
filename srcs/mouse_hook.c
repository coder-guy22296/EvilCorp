/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:08:22 by gli               #+#    #+#             */
/*   Updated: 2016/10/28 16:08:25 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		mouse_hook(int button, int x, int y, void *param)
{
	t_fdf	*fdf;

	fdf = (t_fdf*)param;
	if (button == 5 && fdf->scale_limits <= WIN_W)
		scaling(fdf, '+');
	if (button == 4 && fdf->scale_limits >= 1)
		scaling(fdf, '-');
	if (button == 2)
	{
		fdf->ox = x;
		fdf->oy = y;
	}
	if (button == 1)
	{
		x_y_translation(fdf, abs(fdf->ox - x), 'x', x - fdf->ox > 0);
		x_y_translation(fdf, abs(fdf->oy - y), 'y', y - fdf->oy < 0);
		fdf->ox = x;
		fdf->oy = y;
	}
	mlx_clear_window(fdf->new, fdf->window);
	ft_make_graphic(fdf);
	return (0);
}
