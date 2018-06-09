/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 03:17:58 by ahoussei          #+#    #+#             */
/*   Updated: 2018/06/09 03:18:01 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function ft_ultimate_div_mod with the following prototype :
* void ft_ultimate_div_mod.c(int *a, int *b)
*This function divides parameters a by b. The result of this division is stored in the 
*int pointed by a. The remainder of the division is stored in the int pointed by b*/

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod (int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}

int     main()
{
    int a, b;

    a = 42;
    b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("The value of a and b after ft_ultimate_div_mod are %i and %i\n", a, b);
    return (0);
}

