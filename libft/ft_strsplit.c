/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 14:08:18 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 13:04:18 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_wc(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count += 1;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static int	st_wl(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static int	st_copy(char *arr, int i, char const *s, char c)
{
	int		k;
	int		len;

	len = st_wl(s, c, i);
	k = 0;
	while (k < len)
	{
		arr[k] = s[i];
		i++;
		k++;
	}
	arr[k] = '\0';
	i--;
	return (i);
}

static void	st_free(char **arr, int j)
{
	int		i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	if (!s || !(arr = (char**)malloc(sizeof(char*) * (st_wc(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!(arr[j] = (char*)malloc(sizeof(char) * st_wl(s, c, i) + 1)))
			{
				st_free(arr, j);
				return (NULL);
			}
			i = st_copy(arr[j], i, s, c);
			j++;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}
