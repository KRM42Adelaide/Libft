/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:42:25 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/11 13:21:11 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   ft_memchr 
   -> searches for the first occurence of the character 
   c (an unsigned char) in the first n bytes of the string pointed to. 

   This function returns a pointer to the matching byte or NULL
   */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			count;

	count = 0;
	str = (unsigned char *)s;
	while (count < n)
	{
		if (str[count] == (unsigned char)c)
			return ((void *)(&str[count]));
		count++;
	}
	return (NULL);
}
