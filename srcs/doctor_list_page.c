#include "fdf.h"
void	doctor_list(t_fdf *fdf)
{
	background_home_botton(fdf);
	mlx_string_put(fdf->new, fdf->window, 25, 61, 0xFFFFFF, "Doctor list: ");
	
	mlx_string_put(fdf->new, fdf->window, 25, 101, 0x000000, "Dr. Acula ");
	mlx_string_put(fdf->new, fdf->window, 190, 101, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 101, 455, 124, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 101, 0xffffff, "Make an appointment");
	
	mlx_string_put(fdf->new, fdf->window, 25, 131, 0x000000, "Dr. Patrick ");
	mlx_string_put(fdf->new, fdf->window, 190, 131, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 131, 455, 154, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 131, 0xffffff, "Make an appointment");
	
	mlx_string_put(fdf->new, fdf->window, 25, 161, 0x000000, "Dr. Frankenstein ");
	mlx_string_put(fdf->new, fdf->window, 190, 161, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 161, 455, 184, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 161, 0xfffffff, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 191, 0x000000, "Dr. Strange ");
	mlx_string_put(fdf->new, fdf->window, 190, 191, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 191, 455, 214, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 191, 0xffffff, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 221, 0x000000, "Dr. Nick ");
	mlx_string_put(fdf->new, fdf->window, 190, 221, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 221, 455, 244, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 221, 0xffffff, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 251, 0x000000, "Dr. Hibbert ");
	mlx_string_put(fdf->new, fdf->window, 190, 251, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 251, 455, 274, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 251, 0xFFFFFF, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 281, 0x000000, "Dr. Zoidberg ");
	mlx_string_put(fdf->new, fdf->window, 190, 281, 0xFFA500, "****");
	ft_draw_box(fdf, 265, 281, 455, 304, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 281, 0xFFFFFF, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 311, 0x000000, "Dr. House ");
	mlx_string_put(fdf->new, fdf->window, 190, 311, 0xFFA500, "****");
	ft_draw_box(fdf, 265, 311, 455, 334, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 311, 0xFFFFFF, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 341, 0x000000, "Dr. Jekyll ");
	mlx_string_put(fdf->new, fdf->window, 190, 341, 0xFFA500, "***");
	ft_draw_box(fdf, 265, 341, 455, 364, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 341, 0xFFFFFF, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 371, 0x000000, "Dr. McCoy ");
	mlx_string_put(fdf->new, fdf->window, 190, 371, 0xFFA500, "***");
	ft_draw_box(fdf, 265, 371, 455, 394, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 371, 0xFFFFFF, "Make an appointment");

	ft_draw_box(fdf, 60, 480, 210, 507, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 65, 482, 0xFFFFFF, "Sort by rating");
	ft_draw_box(fdf, 270, 480, 420, 507, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 300, 482, 0xFFFFFF, "Next page");
	ft_draw_box(fdf, 165, 520, 315, 547, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 215, 522, 0xFFFFFF, "Back");
}

void	doctor_list_bad_rating(t_fdf *fdf)
{
	background_home_botton(fdf);
	mlx_string_put(fdf->new, fdf->window, 25, 61, 0xFFFFFF, "Doctor list: ");
	
	mlx_string_put(fdf->new, fdf->window, 25, 101, 0x000000, "Dr. Jekyll ");
	mlx_string_put(fdf->new, fdf->window, 190, 101, 0xFFA500, "***");
	ft_draw_box(fdf, 265, 101, 455, 124, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 101, 0xffffff, "Make an appointment");
	
	mlx_string_put(fdf->new, fdf->window, 25, 131, 0x000000, "Dr. McCoy ");
	mlx_string_put(fdf->new, fdf->window, 190, 131, 0xFFA500, "***");
	ft_draw_box(fdf, 265, 131, 455, 154, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 131, 0xffffff, "Make an appointment");
	
	mlx_string_put(fdf->new, fdf->window, 25, 161, 0x000000, "Dr. House ");
	mlx_string_put(fdf->new, fdf->window, 190, 161, 0xFFA500, "****");
	ft_draw_box(fdf, 265, 161, 455, 184, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 161, 0xfffffff, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 191, 0x000000, "Dr. Zoidberg ");
	mlx_string_put(fdf->new, fdf->window, 190, 191, 0xFFA500, "****");
	ft_draw_box(fdf, 265, 191, 455, 214, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 191, 0xffffff, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 221, 0x000000, "Dr. Nick ");
	mlx_string_put(fdf->new, fdf->window, 190, 221, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 221, 455, 244, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 221, 0xffffff, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 251, 0x000000, "Dr. Hibbert ");
	mlx_string_put(fdf->new, fdf->window, 190, 251, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 251, 455, 274, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 251, 0xFFFFFF, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 281, 0x000000, "Dr. Acula ");
	mlx_string_put(fdf->new, fdf->window, 190, 281, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 281, 455, 304, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 281, 0xFFFFFF, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 311, 0x000000, "Dr. Frankenstein ");
	mlx_string_put(fdf->new, fdf->window, 190, 311, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 311, 455, 334, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 311, 0xFFFFFF, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 341, 0x000000, "Dr. Patrick ");
	mlx_string_put(fdf->new, fdf->window, 190, 341, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 341, 455, 364, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 341, 0xFFFFFF, "Make an appointment");

	mlx_string_put(fdf->new, fdf->window, 25, 371, 0x000000, "Dr. Strange ");
	mlx_string_put(fdf->new, fdf->window, 190, 371, 0xFFA500, "*****");
	ft_draw_box(fdf, 265, 371, 455, 394, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 265, 371, 0xFFFFFF, "Make an appointment");

	ft_draw_box(fdf, 60, 480, 210, 507, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 65, 482, 0xFFFFFF, "Sort by rating");
	ft_draw_box(fdf, 270, 480, 420, 507, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 300, 482, 0xFFFFFF, "Next page");
	ft_draw_box(fdf, 165, 520, 315, 547, 0x55ACEE);
	mlx_string_put(fdf->new, fdf->window, 215, 522, 0xFFFFFF, "Back");
}