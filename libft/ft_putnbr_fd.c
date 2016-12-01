/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 11:17:16 by gli               #+#    #+#             */
/*   Updated: 2016/09/21 19:17:45 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar_fd('-', fd);
	}
	else
		nb = n;
	if (nb < 10)
		ft_putchar_fd(('0' + nb), fd);
	else
	{
		ft_putnbr_fd((int)(nb / 10), fd);
		ft_putchar_fd('0' + (nb - nb / 10 * 10), fd);
	}
}
