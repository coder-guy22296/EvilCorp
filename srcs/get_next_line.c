/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 09:54:47 by gli               #+#    #+#             */
/*   Updated: 2016/10/21 13:03:01 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			set_file(t_holder **files)
{
	*files = (t_holder*)malloc(sizeof(t_holder));
	if (*files == NULL)
		return (1);
	(*files)->saved_data = NULL;
	return (0);
}

void		ft_free(char *saved_data)
{
	ft_strclr(saved_data);
	if (saved_data)
		free(saved_data);
}

char		*find_line(char *saved_data, char **line)
{
	int					i;
	char				*new_saved_data;
	int					len;

	i = 0;
	while (saved_data[i] != '\n')
		i++;
	*line = ft_strnew(i + 1);
	ft_strncpy(*line, saved_data, i);
	len = ft_strlen(saved_data);
	if (len > i + 1)
	{
		new_saved_data = ft_strnew(len - i - 1 + 1);
		ft_strncpy(new_saved_data, &(saved_data[i + 1]), (len - i - 1));
		ft_free(saved_data);
		len = ft_strlen(new_saved_data);
		saved_data = (char*)malloc(sizeof(char) * (len + 1));
		ft_strncpy(saved_data, new_saved_data, len);
		saved_data[len] = '\0';
		ft_free(new_saved_data);
	}
	else
		ft_strclr(saved_data);
	return (saved_data);
}

char		*handle_data(char *buff, char *saved_data)
{
	char				*tmp;
	int					len;

	if (saved_data)
	{
		tmp = ft_strjoin(saved_data, buff);
		len = ft_strlen(tmp);
		ft_free(saved_data);
		saved_data = (char*)malloc(sizeof(char) * (len + 1));
		ft_strncpy(saved_data, tmp, len);
		saved_data[len] = '\0';
		free(tmp);
	}
	else
	{
		tmp = buff;
		len = ft_strlen(tmp);
		saved_data = (char*)malloc(sizeof(char) * (len + 1));
		ft_strncpy(saved_data, tmp, len);
		saved_data[len] = '\0';
	}
	return (saved_data);
}

int			get_next_line(const int fd, char **line)
{
	char				buff[BUFF_SIZE + 1];
	static	t_holder	*files[MAX_FD];
	int					rd;
	int					flag;

	if (fd < 0 || read(fd, buff, 0) < 0 || !line
		|| fd > MAX_FD || (!files[fd] && set_file(&files[fd])))
		return (-1);
	flag = ((files[fd]->saved_data &&
		ft_strchr(files[fd]->saved_data, '\n')) ? 0 : 1);
	while (flag && (rd = read(fd, buff, BUFF_SIZE)))
	{
		buff[rd] = '\0';
		files[fd]->saved_data = handle_data(buff, files[fd]->saved_data);
		flag = (ft_strchr(files[fd]->saved_data, '\n') ? 0 : 1);
	}
	if (flag == 0)
	{
		files[fd]->saved_data = find_line(files[fd]->saved_data, line);
		return (ft_strlen(files[fd]->saved_data) > 0 || (rd >= 0));
	}
	*line = (files[fd]->saved_data ? ft_strdup(files[fd]->saved_data) : "");
	ft_strclr(files[fd]->saved_data);
	return (ft_strlen(*line) > 0);
}
