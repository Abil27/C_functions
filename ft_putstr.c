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


/*Create a function that displays a string of characters on the standard output. 
*Here’s how it should be prototyped : void	ft_putstr(char const *str) */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *str)
{
	while(*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

int 	main(int argc, char **argv)
{
	if(argc > 1)
	{
		ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
