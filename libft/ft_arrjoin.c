/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 16:48:54 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 16:58:57 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_arrjoin(char **arr)
{
	int		i;
	char	*tmp1;
	char	*tmp2;

	if (!arr)
		return (NULL);
	i = 0;
	tmp1 = (char*)malloc(sizeof(char) * 1);
	tmp1[0] = '\0';
	while (arr[i] != 0)
	{
		tmp2 = ft_strjoin(tmp1, arr[i]);
		free(tmp1);
		tmp1 = tmp2;
		i++;
	}
	return (tmp2);
}
