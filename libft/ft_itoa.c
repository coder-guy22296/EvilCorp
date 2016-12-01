/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:20:11 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 08:52:09 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		nb_length(unsigned int nb, int flag)
{
	int i;

	i = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i + flag);
}

static char		*make_string(unsigned int nb, int flag)
{
	int		l;
	char	*str;

	l = nb_length(nb, flag);
	str = (char*)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	str[l] = '\0';
	while (nb >= 10)
	{
		str[l - 1] = ('0' + nb % 10);
		nb = nb / 10;
		l--;
	}
	str[l - 1] = '0' + nb;
	if (flag == 1)
		str[0] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	unsigned int	nb;
	int				flag;
	char			*str;

	flag = 0;
	if (n < 0)
	{
		nb = -n;
		flag = 1;
	}
	else
		nb = n;
	str = make_string(nb, flag);
	return (str);
}
