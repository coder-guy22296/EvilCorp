/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:31:43 by gli               #+#    #+#             */
/*   Updated: 2016/09/28 11:37:39 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && str[i] != '\0')
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_dst;
	size_t	l_src;
	size_t	n_size;

	l_dst = ft_strnlen(dst, size);
	l_src = ft_strlen(src);
	n_size = 0;
	if (l_dst == size)
		return (l_dst + l_src);
	while ((l_dst + n_size) < size && src[n_size] != '\0')
	{
		dst[l_dst + n_size] = src[n_size];
		n_size++;
	}
	if (src[n_size] != '\0')
		dst[l_dst + n_size - 1] = '\0';
	else
		dst[l_dst + n_size] = '\0';
	return (l_dst + l_src);
}
