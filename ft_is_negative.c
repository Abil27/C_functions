/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 00:17:45 by ahoussei          #+#    #+#             */
/*   Updated: 2018/06/04 00:17:48 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{
    int i;


        if(argv[i] < 0)
        {
            ft_putchar('N');
        }
        else
        {
            ft_putchar('p');
        }
    ft_putchar('\n');
    return (0);
}