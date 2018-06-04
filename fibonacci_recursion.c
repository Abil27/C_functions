/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 06:07:44 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/30 06:07:50 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     fibonacci(int n)
{
    if(n <= 1) 
    {
        return n;
    }
        return fibonacci(n - 1) + fibonacci(n -2);
}

int main(void)
{
    int n;
    printf("Give me an n: ");
    scanf("%i", &n);

    int result = fibonacci(n);
    printf("The result of this fibonnaci is: %i\n", result);
    return 0;
}

