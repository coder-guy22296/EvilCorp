/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 15:47:40 by gli               #+#    #+#             */
/*   Updated: 2016/10/26 15:47:42 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			key_hook(int keycode, void *param)
{
    t_fdf *fdf;
    fdf = param;
    (void)(param);
    //ft_putnbr(keycode);
    //    if (keycode == 0)
    //    {
    //        mlx_string_put(fdf->new, fdf->window, fdf->keylocation, 300, 0xffffff, "a");
    //        fdf->keylocation = fdf->keylocation + 10;
    //
    //    }
    
    t_textbox *textbox;
    
    if ((textbox = get_focused_textbox(fdf)))
    {
        ft_putstr("cursor pos: ");
        ft_putnbr(textbox->cursor_pos);
        char *string = "asdfhgzxcv bqweryt123465=97-80]ou[ip lj\"k;\\,/nm.  `       . * +     / -  =01234567 89";
        if(keycode == 51 && textbox->cursor_pos > 0)
        {
            (textbox->cursor_pos)--;
            textbox->content[textbox->cursor_pos] = '\0';
        }
        else if(keycode != 51)
        {
            
            textbox->content[textbox->cursor_pos] = string[keycode];
            (textbox->cursor_pos)++;
        }
        mlx_clear_window(fdf->new, fdf->window);
        if(fdf->page == 0 || fdf->page == 3)
            render_login_page(fdf); //Login Screen
        if (fdf->page == 1)
            render_registration_page(fdf);
        
        ft_putstr("cursor pos: ");
        ft_putnbr(textbox->cursor_pos);
        ft_putchar('\n');
    }
        if (keycode == 53)
    {
        exit(0);
    }
    if (keycode == 125)
    {
        mlx_clear_window(0, fdf->window);
        pharmacist_page(fdf);
    }
    if (keycode == 126)
    {
        mlx_clear_window(0, fdf->window);
        doctor_page(fdf);
    }
    if (keycode == 123)
    {
        mlx_clear_window(0, fdf->window);
        login_page_prep(fdf);
        render_login_page(fdf);
        fdf->page = 0;
    }
    return (0);
}