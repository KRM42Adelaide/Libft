/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:50:30 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/12 12:32:43 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_isalnum checks whether a given argument is an alphanumeric character
    If its an alphanumeric character:   1 is returned
    If neither:                         0 is returned
A single argument is passed on to the function as a CHARACTER 
but is taken into the function as an INTEGER argument.
    -> (internally)the charcter is converted into the integer value 
        corresponding to its ASCII value when passed.
Defined in the ctype.h header
*/

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
/*int main(void)
{
    char    c;
    int retrn;

    printf("Enter a character: ");
    scanf("%c", &c);

    retrn = ft_isalnum(c);

    if (retrn == 1)
    {
        printf("Character: %c is either a number or a character", c);
    }
    else
        printf("Character: %c is neither a number nor a character", c);
    return (0);
}*/	
