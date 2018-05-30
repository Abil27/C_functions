/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 02:04:07 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/25 04:08:45 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
		int i, j;

		i = 0;
		while (s1[i] != '\0')
		{
			i++;
		}

		j = 0;
		while (s2[j] != '\0' && j < n)
		{
			s1[i] = s2[j];
			i++;
			j++;
		}
		s1[i] = '\0';
		return (s1);
}

int		main(void)
{
		char s1[30] = "Houssein et ";
		char s2[30] = "Faizah";

		ft_strncat(s1, s2, 3);
		printf("le ft_strncat de s1 et s2 donne %s\n", s1);
		return (0);
}
