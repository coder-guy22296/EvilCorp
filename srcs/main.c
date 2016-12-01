#include "fdf.h"
int			main(int ar, char **av)
{
    t_fdf	*fdf;
    (void)av;
    (void)ar;
    fdf = (t_fdf*)malloc(sizeof(t_fdf) * 1);
    fdf->new = mlx_init();
    fdf->keylocation = 300;
    fdf->window = mlx_new_window(fdf->new, 480, 800, "fdf 42");
    page1(fdf);
    mlx_key_hook(fdf->window, key_hook, (void*)fdf);
    mlx_loop(fdf->new);
    return (0);
}
