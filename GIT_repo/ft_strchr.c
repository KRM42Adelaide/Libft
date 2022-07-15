/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:10 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/15 11:48:20 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   ft_strchr searches for the first occurrence of the character c (an 
   unsigned char) in the string pointed to by the argument str.
   -> str is the C string to be scanned
   -> c is the character to be searched in str
   Return value:
   -> returns a POINTER to the first occurence of the characater c in the string
   -> returns NULL if the character is not found
*/

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	i = 0;
	while (i <= len)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
