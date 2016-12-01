/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 18:04:32 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 18:15:42 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_base_two(unsigned int nb)
{
	if (nb < 2)
		ft_putnbr(nb);
	else
	{
		ft_base_two(nb / 2);
		ft_putnbr(nb % 2);
	}
}