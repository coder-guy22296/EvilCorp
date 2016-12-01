#include "fdf.h"

int		ft_draw_box(t_fdf *fdf, int x1, int y1, int x2, int y2, int color)
{
	int i;
	int j;
	i = x1;
	while (i<x2)
	{
		j = y1;
		while(j < y2)
		{
			mlx_pixel_put(fdf->new, fdf->window, i, j, color);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_draw_circle(t_fdf *fdf, int x, int y, int radius, int color)
{
	int i;
	int	j;

	i = x - radius;
	while (i< x + radius)
	{
		j = y - radius;
		while(j < y + radius)
		{
			if (sqrt((i - x) * (i - x) + (j - y) * (j - y)) < (double)radius)
				mlx_pixel_put(fdf->new, fdf->window, i, j, color);
			j++;
		}	
		i++;
	}
	return (0);
}