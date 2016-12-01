#include "fdf.h"

void	pharmacy_list(t_fdf *fdf)
{
    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 25, 61, 0xFFFFFF, "pharmacy list: ");
    
    mlx_string_put(fdf->new, fdf->window, 25, 101, 0x55ACEE, "CVS Store && Pharmacy ");
    ft_draw_box(fdf, 365, 101, 455, 124, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 375, 101, 0xffffff, "Request");
    mlx_string_put(fdf->new, fdf->window, 25, 141, 0x55ACEE, "Address: Rosemont Square Shopping Center, ");
    mlx_string_put(fdf->new, fdf->window, 100, 171, 0x55ACEE,  "35080 Newark Blvd, Newark, CA 94560.");
    mlx_string_put(fdf->new, fdf->window, 25, 201, 0x55ACEE, "Phone Number: (510) 796-4050");
    mlx_string_put(fdf->new, fdf->window, 25, 231, 0xff0000, "Open Time: 7 a.m. - 10 p.m.");
    
    mlx_string_put(fdf->new, fdf->window, 25, 271, 0x55ACEE, "Newark Haller's Pharmacy ");
    ft_draw_box(fdf, 365, 271, 455, 294, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 375, 271, 0xffffff, "Request");
    mlx_string_put(fdf->new, fdf->window, 25, 301, 0x55ACEE, "Address: 6170 Thornton Ave, Newark, ");
    mlx_string_put(fdf->new, fdf->window, 100, 331, 0x55ACEE,  "CA 94560.");
    mlx_string_put(fdf->new, fdf->window, 25, 361, 0x55ACEE, "Phone Number: (510) 797-4333");
    mlx_string_put(fdf->new, fdf->window, 25, 391, 0xff0000, "Open Time: 9 : 30 a.m. - 6 p.m.");
    
    mlx_string_put(fdf->new, fdf->window, 25, 431, 0x55ACEE, "Rite Aid ");
    ft_draw_box(fdf, 365, 431, 455, 454, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 375, 431, 0xffffff, "Request");
    mlx_string_put(fdf->new, fdf->window, 25, 461, 0x55ACEE, "Address: Rosemont Square Shopping Center, ");
    mlx_string_put(fdf->new, fdf->window, 100, 491, 0x55ACEE,  "35080 Newark Blvd, Newark, CA 94560.");
    mlx_string_put(fdf->new, fdf->window, 25, 521, 0x55ACEE, "Phone Number: (510) 796-4050");
    mlx_string_put(fdf->new, fdf->window, 25, 551, 0xff0000, "Open Time: 7 a.m. - 10 p.m.");
    
    ft_draw_box(fdf, 165, 605, 315, 637, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 215, 607, 0xFFFFFF, "Back");
}