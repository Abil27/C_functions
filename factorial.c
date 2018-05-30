/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 01:26:02 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/30 01:26:08 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

int     factorial(int n)
{   
    printf("I am calculating the factorial of f(%i)\n", n);
    if (n == 0)
        return 1;
    
    int fact = n * factorial(n -1);
    printf("The factorial of %i is %i\n", n, fact);
    return fact;
}

int     main()
{
    int k;
    int resultat;
    printf(" Donne moi un nombre:");
    scanf("%i", &k);

    resultat = factorial(k);
    printf("Le resultat est: %i \n", resultat);
    return 0;
}