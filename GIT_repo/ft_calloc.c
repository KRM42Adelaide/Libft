/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:42:23 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/11 13:18:37 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   The C library function void *calloc(size_t nitems, size_t size) allocates 
   the requested memory and returns a pointer to it. The difference in malloc 
   and calloc is that malloc does not set the memory to zero where as calloc 
   sets allocated memory to zero.
   */

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = (char *)malloc(size * count);
	if (!array)
		return (NULL);
	return (ft_memset(array, 0, size * count));
}
