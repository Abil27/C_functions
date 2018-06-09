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

/* Create a function that displays all different combinations of three different 
digits in ascending order, listed by ascending order - yes, repetition is voluntary.
Here’s the intended output :
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
• 987 isn’t there because 789 already is.
• 999 isn’t there because the digit 9 is present more than once.
• Here’s how it should be prototyped :  void ft_print_comb(void); */

#include <unistd.h>

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
