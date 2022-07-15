/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:58:11 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/11 13:20:40 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   ft_isprint checks whether a given argument is a printable character
   If the argument is a printable character:       1 is returned
   If the argument is not a printable character:   0 is returned

   A single argument is passed to the function as a CHARACTER
   but is taken into the function as an INTEGER argument
   -> (internally), the character is converted into the integer value
   corresponding to its ASCII value when passed.

   Defined in <ctype.h>
   */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}
/*int main(void)
  {
  char c;
  int retrn;

  printf("Enter a character: ");
  scanf("%c", &c);

  retrn = ft_isprint(c);

  if (retrn == 1)
  {
  printf("Character: %c is printable", c);
  }
  else 
  printf("Character: %c is not printable", c);

  return (0);
  }*/
