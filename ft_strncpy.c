/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 02:45:58 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/24 03:30:30 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}

	while (i < len && src == '\0')
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

int		main(void)
{
	char src [] = "Houssein";
	char dst[10] = "";
	printf("The source string is %s and the destination string is %s\n", src, dst);
	ft_strncpy(dst, src, 4);
	printf("The destination string after ft_strncpy is %s\n", dst);
	return (0);
}

