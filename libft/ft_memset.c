/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 20:37:21 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 08:48:39 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	char			*mem;

	i = 0;
	mem = (char *)str;
	while (i < n)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
