/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 13:47:30 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 14:47:23 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	start_i;
	size_t	end;
	char	*new;

	if (!s)
		return (NULL);
	start_i = 0;
	while (s[start_i] == ' ' || s[start_i] == '\n' || s[start_i] == '\t')
		start_i++;
	end = ft_strlen(s);
	while ((end > 1) && (end > start_i) && (s[end - 1] == ' ' ||
				s[end - 1] == '\t' || s[end - 1] == '\n'))
		end--;
	if (!(new = (char *)malloc(sizeof(char) * (end - start_i + 1))))
		return (NULL);
	len = 0;
	while (start_i < end)
	{
		new[len] = s[start_i];
		len++;
		start_i++;
	}
	new[len] = '\0';
	return (new);
}
