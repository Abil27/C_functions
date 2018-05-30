/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 02:04:07 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/25 02:13:55 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *s1, char const *s2)
{
		int i, j;

		i = 0;
		while (s1[i] != '\0')
		{
			i++;
		}

		j = 0;
		while (s2[j] != '\0')
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
		char s1[20] = "Houssein et ";
		char s2[20] = "Faizah";

		ft_strcat(s1, s2);
		printf("le ft_strcat de s1 et s2 donne %s\n", s1);
		return (0);
}
