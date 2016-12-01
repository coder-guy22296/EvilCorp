#include "fdf.h"

void	pharmacist_page(t_fdf *fdf)
{
    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 190, 100, 0x000000, "PHARMACIST");
    ft_draw_box(fdf, 150, 280, 345, 345, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 180, 300, 0x000000, "Rx TO PREPARE");
    ft_draw_box(fdf, 150, 380, 345, 445, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 200, 400, 0x000000, "Rx HISTORY");
    ft_draw_box(fdf, 150, 480, 345, 545, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 165, 500, 0x000000, "SUPPLIES IN STOCK");
    ft_draw_box(fdf, 150, 580, 345, 645, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 180, 600, 0x000000, "ORDER SUPPLIES");
}

void	doctor_page(t_fdf *fdf)
{
    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 200, 100, 0x000000, "DOCTOR");
    ft_draw_box(fdf, 150, 280, 345, 345, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 180, 300, 0x000000, "UPCOMING PATIENT");
    ft_draw_box(fdf, 150, 380, 345, 445, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 200, 400, 0x000000, "Rx HISTORY");
    ft_draw_box(fdf, 150, 480, 345, 545, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 165, 500, 0x000000, "CONTECT PHARMACIST");
    ft_draw_box(fdf, 150, 580, 345, 645, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 185, 600, 0x000000, "LAB ORDER");
}
