/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:55:14 by ahoussei          #+#    #+#             */
/*   Updated: 2018/06/04 12:55:17 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    char i, j, k;

    i = '0';
    while (i <= '7')
    {
        j = i + 1;
        while (j <= '8')
        {
            k = j + 1;
            while (k <= '9')
            {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
                ft_putchar(',');
                ft_putchar(' ');
                k++;
            }
            j++;
        }
        i++;
    }
}

int     main(void)
{
    ft_print_comb();
    return (0);
}
