/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:55:28 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/11 13:19:28 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   ft_isascii checks whether a given argument is an ascii character
   If argument is an ascii character:      1 is returned
   If argument is not an ascii character:  0 is returned

   A single argument is passed to the function as a CHARACTER
   but is taken into the function as an INTEGER argument
   -> (internally), the character is converted into the integer value 
   corresponding to its ASCII value when passed.

   Defined in <ctype.h>
   */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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

  retrn = ft_isascii(c);

  if (retrn == 1)
  {
  printf("Character: %c is ascii", retrn);
  }
  else
  printf("Character: %c is not ascii", retrn);

  return (0);
  }*/
