/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:58:52 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/25 21:14:00 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

int		ft_isascii(int	c)
{
	return (c >= 0 && c <= 177);
}

int		main(void)
{
	int i;
	printf("Give me a number\n");
	scanf("%d", &i);
	if(ft_isascii(i))
	{
		printf("your number %d is an ascii", i); 
	}
	return 0;

}
