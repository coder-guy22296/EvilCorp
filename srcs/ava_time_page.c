#include "fdf.h"

void 		make_an_appointment(t_fdf *fdf)
{
    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 25, 61, 0xFFFFFF, "Available Time");
    mlx_string_put(fdf->new, fdf->window, 25, 91, 0x000000, "Date : 11/29/2016");
    
    mlx_string_put(fdf->new, fdf->window, 25, 131, 0x000000, "9 : 30 a.m.");
    ft_draw_box(fdf, 365, 131, 455, 154, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 380, 131, 0xffffff, "select");
    
    mlx_string_put(fdf->new, fdf->window, 25, 161, 0x000000, "3 : 30 p.m.");
    ft_draw_box(fdf, 365, 161, 455, 184, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 380, 161, 0xffffff, "select");
    
    mlx_string_put(fdf->new, fdf->window, 25, 191, 0x000000, "Date : 11/30/2016");
    
    mlx_string_put(fdf->new, fdf->window, 25, 221, 0x000000, "9 : 30 a.m.");
    ft_draw_box(fdf, 365, 221, 455, 244, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 380, 221, 0xffffff, "select");
    
    mlx_string_put(fdf->new, fdf->window, 25, 251, 0x000000, "2 : 30 p.m.");
    ft_draw_box(fdf, 365, 251, 455, 274, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 380, 251, 0xffffff, "select");
    
    mlx_string_put(fdf->new, fdf->window, 180, 281, 0xff0000, "No availablilty");
    ft_draw_box(fdf, 165, 520, 315, 547, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 215, 522, 0xFFFFFF, "Back");
}

void        modify_appointment(t_fdf *fdf)
{
    ft_draw_box(fdf, 365, 131, 455, 154, 0xffffff);
    ft_draw_box(fdf, 365, 161, 455, 184, 0xffffff);
    ft_draw_box(fdf, 365, 221, 455, 244, 0xffffff);
    ft_draw_box(fdf, 365, 251, 455, 274, 0xffffff);
    ft_draw_box(fdf, 145, 280, 335, 320, 0xffffff);
    mlx_string_put(fdf->new, fdf->window, 180, 281, 0xffffff, "No availablilty");
    ft_draw_box(fdf, 125, 340, 355, 364, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 152, 342, 0xFFFFFF, "Cancel Appointment");
    ft_draw_box(fdf, 365, 161, 455, 184, 0x55ACEE);
    mlx_string_put(fdf->new, fdf->window, 365, 161, 0xffffff, "selected");
    
}