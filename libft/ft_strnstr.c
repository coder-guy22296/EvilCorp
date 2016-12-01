/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:48:09 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 15:31:40 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_string(const char *str,
		const char *little, size_t i, size_t len)
{
	int		j;

	j = 0;
	while (little[j] != '\0')
	{
		if ((str[i] != little[j]) || (i > len - 1))
			return (0);
		i++;
		j++;
	}
	return (1);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[i] != '\0' && i < len)
	{
		if (check_string(big, little, i, len) == 1)
			return ((char*)big + i);
		i++;
	}
	return (NULL);
}
