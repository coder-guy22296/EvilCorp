/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 16:34:26 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 16:46:41 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s1)
{
	char	*new;
	int		i;
	int		len;

	if (!s1)
		return (NULL);
	new = ft_strdup(s1);
	len = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[len];
		i++;
		len--;
	}
	new[i] = '\0';
	return (new);
}
