/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:40:09 by gli               #+#    #+#             */
/*   Updated: 2016/10/21 12:40:01 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putarray(char **arr)
{
	int		i;

	i = 0;
	while (arr[i] != 0)
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_put_3d_array(char ***arr)
{
	int		i;

	i = 0;
	while (arr[i] != 0)
	{
		ft_putarray(arr[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_put_int_arr(int **arr)
{
	int		i;
	int		j;

	i = 0;
	while (arr[i] != 0)
	{
		j = 0;
		while (j < 2)
		{
			ft_putnbr(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_put_int_3d_arr(int ***arr)
{
	int		i;

	i = 0;
	while (arr[i] != 0)
	{
		ft_put_int_arr(arr[i]);
		ft_putchar('\n');
		i++;
	}
}
