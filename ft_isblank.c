/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 21:21:58 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/25 21:38:27 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_isblank(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		main(void)
{
	char c;
	printf("Give me blank\n");
	scanf("%s", &c);
	if(ft_isblank(c))
	{
		printf("Thanks for the blank which is %d", c);
	}
	return 0;
}
