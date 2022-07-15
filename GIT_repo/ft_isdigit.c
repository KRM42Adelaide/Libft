/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:49:23 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/11 13:20:13 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   ft_isdigit checks whether a given argument is a digit 
   If argument is a digit:     1 is returned
   If argument is not a digit: 0 is returned

   A single argument is passed to the function as a CHARACTER
   but is taken into the function as an INTEGER argument
   -> (internally), the character is converted into the integer value
   corresponding to its ASCII value when passed.

   Defined in <ctype.h>
   */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

  retrn = ft_isdigit(c);

  if (retrn == 1)
  {
  printf("Character: %c is a digit", c);
  }
  else
  printf("Character: %c is not a digit", c);
  return (0);
  }*/
