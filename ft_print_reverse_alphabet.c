/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 00:11:03 by ahoussei          #+#    #+#             */
/*   Updated: 2018/06/04 00:11:07 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(void)
{
    char alphabet = 'z';

    while(alphabet >= 'a')
    {
        ft_putchar(alphabet);
        alphabet--;
    }
    ft_putchar('\n');
    return (0);
}