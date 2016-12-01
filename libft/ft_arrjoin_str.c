/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrjoin_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 17:17:46 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 18:54:21 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_arrjoin_str(char **arr, char *str)
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
		if (arr[i + 1] == 0)
			tmp2 = ft_strjoin(tmp1, arr[i]);
		else
			tmp2 = ft_strjoin(ft_strjoin(tmp1, arr[i]), str);
		free(tmp1);
		tmp1 = tmp2;
		i++;
	}
	return (tmp2);
}
