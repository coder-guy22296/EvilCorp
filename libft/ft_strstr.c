/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 13:01:44 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 09:18:49 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_string(const char *str, const char *little, int i)
{
	int j;

	j = 0;
	while (little[j] != '\0')
	{
		if (str[i] != little[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char		*ft_strstr(const char *big, const char *little)
{
	int i;

	i = 0;
	if (big[0] == '\0' && little[0] == '\0')
		return ((char*)big);
	while (big[i] != '\0')
	{
		if (check_string(big, little, i) == 1)
			return ((char*)big + i);
		i++;
	}
	return (NULL);
}
