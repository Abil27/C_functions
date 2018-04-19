/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:22:54 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/18 20:31:13 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	while(*s != 0)
	{
		ft_putchar(*s);
		s++;
	}
}

int 	main(int argc, char **argv)
{
	if(argc >= 1)
	{
		ft_putstr(argv[1]);
	}
	return (0);
}
