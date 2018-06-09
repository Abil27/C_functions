/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 02:57:49 by ahoussei          #+#    #+#             */
/*   Updated: 2018/06/09 02:57:51 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function ft_div_mod prototyped like this :  void ft_div_mod(int a, int b, int *div, int *mod);
*This function divides parameters a by b and stores the result in the int pointed by div. 
*It also stores the remainder of the division of a by b in the int pointed by mod*/

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int     main()
{
    int a, b, div, mod;

    a = 42;
    b = 7;

    ft_div_mod(a, b, &div, &mod);
    printf("Les valeurs de div et mod apres ft_div_mod sont respectivement %i et %i", div, mod);
    return (0);
}
