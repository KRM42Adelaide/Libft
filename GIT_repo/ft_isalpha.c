/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:43:59 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/11 09:58:20 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   ft_isalpha checks whether a given argument is an alphabet character
   If argument is an alphabet:     1 is returned
   If argument is not an alphabet: 0 is returned
   A single argument is passed on to the function as a CHARACTER 
   but is taken into the function as an INTEGER argument.
   -> (internally), the character is converted into the integer value 
   corresponding to its ASCII value when passed.
   Defined in the <ctype.h> header file.
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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

  retrn = ft_isalpha(c);

  if (retrn == 1)
  {
  printf("Character: %c is an alphabet", c);
  }
  else
  printf("Character: %c is not an alphabet", c);
  return (0);
}*/
