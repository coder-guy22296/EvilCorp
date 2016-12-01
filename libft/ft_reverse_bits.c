/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 18:49:38 by gli               #+#    #+#             */
/*   Updated: 2016/09/27 19:00:09 by gli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_reverse_bits(unsigned char octet)
{
	unsigned int i;
	unsigned int k;
	unsigned int w;
	unsigned int number;

	number = 0;
	w = 0;
	k = 128;
	i = octet - 0;
	while (i > 0)
	{
		w = i % 2;
		i = i / 2;
		if (w == 1)
			number = number + k;
		k = k / 2;
	}
	return (number);
}
