/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:00:24 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/12 15:54:04 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   ft_strlen finds to number of characters in a string and returns We use size_t 
   because it will be big enough to contain the size of the biggest object our 
   system can handle 
   */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
   int main(void)
   {
   char *s;
   int strlen;

   s = "Kushinga";
   strlen = ft_strlen(s);

   printf("The number of characters in %s, is %d", s, strlen);

   return (0);
   }*/
