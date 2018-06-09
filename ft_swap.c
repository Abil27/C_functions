/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:26:53 by ahoussei          #+#    #+#             */
/*   Updated: 2018/06/08 16:26:57 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*Create a function that swaps the value of two integers whose addresses are entered as parameters.
*Here’s how it should be prototyped :
*void ft_swap(int *a, int *b); */

void    ft_swap(int *a, int *b)
{
    int temp;
   temp = *a;
    *a = *b;
    *b = temp;
}

int     main()
{
    int x = 25;
    int y = 76;

    ft_swap(&x, &y);

    printf("La valeur de a qui etait 25 devient %d et b qui etait 76 devient %d\n", x, y);
    return (0);

}