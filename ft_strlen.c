/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 18:50:55 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/23 21:39:23 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that counts and returns the number of characters in a string. 
*Here’s how it should be prototyped : int		ft_strlen(char *str) */
#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return len;
}

int		main(int argc, char **argv)
{
	// char string[] = "Houssein";
	// printf("Le nom Houssein comprend %d mots\n", ft_strlen(string));
	int length;
	if(argc > 1)
	{
		length = ft_strlen(argv[1]);
	}
	printf("Le nom comprend %d mots", length);
	return 0;
} 
