/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 23:43:28 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/24 00:07:43 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

int		main(void)
{
	char src[] = "Houssein";
	char dst[] = "Faizah";
	printf("Voici la source qui pour valeur %s et la destionation qui pour valeur %s\n", src, dst);
	ft_strcpy(dst, src);
	printf("La destination qui avait pour valeur Faizah devient maintenant %s\n", dst);
	return (0);
	
}
