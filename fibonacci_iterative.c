/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci_iterative.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 06:34:11 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/30 06:34:31 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int fibonacci_iterative(int n)
{
    if(n <= 1)
    {
        return n;
    }
    int f1, f2, f;
    f1 = 0;
    f2 = 1;

    for(int i = 2; i <= n; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int     main(void)
{
    int n;

    printf("Give me an n: ");
    scanf("%i", &n);

    int result = fibonacci_iterative(n);
    printf("The iterative fibonnaci of your n is: %i", result);
    return 0;
}
