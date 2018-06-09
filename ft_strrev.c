/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:17:31 by ahoussei          #+#    #+#             */
/*   Updated: 2018/06/09 13:17:38 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that reverses the order of characters in a string. • It has to return str.
*Here’s how it should be prototyped :  char *ft_strrev(char *str); */

#include <stdio.h>
#include <unistd.h>

int     ft_strlen(char *str)
{
    int len;
    
    len = 0;

    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

char *ft_strrev(char *str)
{
    int i, count;
    char temp;

    i = 1;
    count = ft_strlen(str);
    while(i < count)
    {
        temp = str[i - 1];
        str[i - 1] = str[count - 1];
        str[count] = temp;
        i++;
        count--;
    }
    return (str);
}

int     main()
{
    char name[10] = "Houssein";
    ft_strrev(name);
    printf("The name Houssein after Strrev is %s\n", name);
    return (0);
}

