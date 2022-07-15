/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:04:22 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/11 13:17:54 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_bzero function shall place n valued bytes in the area pointed to by s
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
