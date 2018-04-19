/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:45:41 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/18 21:11:07 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}

	if ((nbr / 10) > 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
	}

int		main()
{
	ft_putnbr(42);
	return (0);
}
