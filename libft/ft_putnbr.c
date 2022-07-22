/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:48:24 by tpoungla          #+#    #+#             */
/*   Updated: 2022/07/07 00:48:24 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	int	s;

	s = 1;
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	while (nbr / s >= 10 && nbr / s > 0)
		s *= 10;
	while (nbr >= 0)
	{
		ft_putchar(nbr / s + '0');
		nbr -= (nbr / s) * s;
		s /= 10;
	}
}
