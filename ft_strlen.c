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

#include <stdio.h>

int		ft_strlen(char *s)
{
	int len;

	len = 0;
	while(s[len] != '\0')
	{
		len++;
	}
	return len;
}

int		main(void)
{
	char string[] = "Houssein";
	printf("Le nom Houssein comprend %d mots\n", ft_strlen(string));
	return 0;
} 
