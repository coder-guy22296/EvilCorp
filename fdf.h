/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:39:55 by gli               #+#    #+#             */
/*   Updated: 2016/11/09 22:44:41 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FDF_H
# define __FDF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include "libft/includes/libft.h"
# include <fcntl.h>
# include "mlx.h"
# include <math.h>
# define WIN_W 800
# define WIN_H 600
# define ROSE 0x1e90ff
# define YELLOW 0xffe7ba
# define LOGIN 0
# define PAITENT_APPOINTMENT 4
# define REGISTER 1
# define DOCTOR_NEARBY 5

typedef struct			s_char_list
{
	struct s_char_list	*next;
	char				data;
}						t_char_list;
typedef	struct			s_line
{
	struct s_line		*next;
	char				**data;
}						t_line;
typedef struct			s_point
{
	double				x;
	double				y;
	double				z;
	double				o_x;
	double				o_y;
	double				o_z;
}						t_point;

typedef struct  s_textbox
{
	char    *content;
	char    *title;
	int 	char_limit;
	int		cursor_pos;
	int     x_pos;
	int     y_pos;
	int     height;
	int     width;
	int 	line_len;
	int		infocus;
}               t_textbox;

typedef struct  s_user
{
	char *fullname;
	char *username;
	char *password;
	char *role;
}				t_user;

typedef struct			s_fdf
{
	void				*new;
	void				*window;
	int					fd;
	char				*line;
	int					**table;
	int					size;
	int					rd;
	int					index;
	int					height;
	t_point				*points;
	int					ox;
	int					oy;
	int					max_z;
	int					min_z;
	int					z_diff;
	double				step_size;
	double				scale_limits;
	double				z_size;
    int                 keylocation;
    int                 page;
    int                 password;
    int                 access;
    int                 appointment;
    t_textbox			*textbox;
	t_list				*textboxes;
	t_list				*users;
	t_user				*active_user;
	t_user				*new_user;
	char				*user_role;

}						t_fdf;
typedef struct			s_int_points
{
	int					dx;
	int					dy;
	int					x;
	int					err;
	int					y;
}						t_variables;

int						get_next_line(const int fd, char **line);
int		ft_draw_box(t_fdf *fdf, int x1, int y1, int x2, int y2, int color);
int		page1(t_fdf *fdf);
int		ft_draw_circle(t_fdf *fdf, int x, int y, int radius, int color);
int			key_hook(int keycode, void *param);
void    patient_login(t_fdf *fdf);
void    patient_appointment_page(t_fdf *fdf);
void	doctor_list(t_fdf *fdf);
void	doctor_list_bad_rating(t_fdf *fdf);
void	background_home_botton(t_fdf *fdf);
void	pharmacy_list(t_fdf *fdf);
void 		make_an_appointment(t_fdf *fdf);
void        modify_appointment(t_fdf *fdf);
void 	login_page(t_fdf *fdf);
void	pharmacist_page(t_fdf *fdf);
void	doctor_page(t_fdf *fdf);

//textbox
//textbox
t_textbox	*new_textbox(char *title, int x, int y, int height, int width, int char_limit);
void		render_textbox(t_fdf *fdf, t_textbox *textbox);
void		render_textboxes(t_fdf *fdf, t_list *list);
void		del_textbox(void *content, size_t size);
t_textbox	*get_focused_textbox(t_fdf *fdf);
char *get_textbox_content(t_fdf *fdf, char *title);
void		draw_line(int x, int y1, int y2, t_fdf *fdf);
void 		draw_logo(t_fdf *fdf);

//patient pages
void		login_page_prep(t_fdf *fdf);
void		register_page_prep(t_fdf *fdf);
void		render_login_page(t_fdf *fdf);
void		render_registration_page(t_fdf *fdf);

//authentication
t_user  *new_user(char *fullname, char *username, char *password, char *role);
int is_authenticated(t_user *user, char *username, char *password);
t_user *login(t_list *users, char *username, char *password);

#endif
