/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alphabet.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 00:05:01 by ahoussei          #+#    #+#             */
/*   Updated: 2018/06/04 00:05:10 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

int         main(void)
{
    char a = 'a';

    while (a <= 'z')
    {
        ft_putchar(a);
        a++;
    }
    ft_putchar('\n');
    return (0);

}