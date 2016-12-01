
#include "fdf.h"

t_textbox *new_textbox(char *title, int x, int y, int height, int width, int char_limit)
{
	t_textbox *textbox = (t_textbox *)malloc(sizeof(t_textbox));
	textbox->content = (char *)malloc(sizeof(char) * (char_limit + 1));
	textbox->title = ft_strdup(title);
	textbox->cursor_pos = 0;
	textbox->x_pos = x;
	textbox->y_pos = y;
	textbox->height = height;
	textbox->width = width;
	textbox->char_limit = char_limit;
	int i = 0;
	while (i <= textbox->char_limit)
	{
		textbox->content[i] = '\0';
		i++;
	}
	return (textbox);
}

void render_textbox(t_fdf *fdf, t_textbox *textbox)
{
	int i;
	int line_start;
	int line_stop;
	int title_px_size;

	title_px_size = ft_strlen(textbox->title) * 9;
	line_start = textbox->x_pos + title_px_size + 9;
	//textbox->line_len = textbox->width - line_start;
	line_stop = textbox->x_pos + textbox->width;
	mlx_string_put(fdf->new, fdf->window, textbox->x_pos, textbox->y_pos, 0x000000, (char *)textbox->title);	//was 50 450
	i = line_start; //was 140
	while (i < line_stop)//was 360
		mlx_pixel_put(fdf->new, fdf->window, i++, textbox->y_pos + textbox->height, 0x000000);//was 470
	// textbox->x_pos + (ft_strlen(textbox->title) * 9) + 5
	mlx_string_put(fdf->new, fdf->window, line_start, textbox->y_pos, 0x000000, textbox->content);
}

void render_textboxes(t_fdf *fdf, t_list *list)
{
	t_list *current;

	current = list;
	if (current)
	{
		while (current->next)
		{
			render_textbox(fdf, ((t_textbox *)current->content));
			current = current->next;
		}
		render_textbox(fdf, ((t_textbox *)current->content));
	}
}

void del_textbox(void *content, size_t size)
{
	size = 101;
	t_textbox *textbox = (t_textbox *)content;
	ft_memdel((void **)&(textbox->title));
	ft_memdel((void **)&(textbox->content));
	ft_memdel((void **)&textbox);
}

t_textbox *get_focused_textbox(t_fdf *fdf)
{
    if (fdf->textboxes)
    {
        t_list *current;
        t_textbox *textbox;
        
        current = fdf->textboxes;
        if (current)
        {
            while (current->next)
            {
                textbox = ((t_textbox *)current->content);
                if (textbox->infocus)
                {
                    return (textbox);
                }
                current = current->next;
            }
            textbox = ((t_textbox *)current->content);
            if (textbox->infocus)
            {
                return (textbox);
            }
        }
    }
    return (NULL);
}

char *get_textbox_content(t_fdf *fdf, char *title)
{
	t_list	*tmp;
	t_textbox *textbox;
	t_list *lst;
	
	lst = fdf->textboxes;

	while (lst != NULL)
	{
		tmp = lst->next;
		textbox = ((t_textbox *)lst->content);
		//execute here
		if (ft_strcmp(textbox->title, title) == 0)
		{
			return (textbox->content);
		}
		lst = tmp;
	}

	return (NULL);
}

