/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:03:21 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/12 13:00:45 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
LIBRARY: N/A
SYNOPSIS: convert integer to ASCII string
DESCRIPTION:
Allocates (with malloc(3)) and returns a string representing the
integer received as an argument. Negative numbers must be handled.
*/

static int	absolute(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	alloc_me(char **str, int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i = 1;
	while (n < -9 || n > 9)
	{
		n = n / 10;
		i++;
	}
	*str = (char *)malloc(sizeof(char) * (i + 2));
	if (!*str)
		return (0);
	(*str)[i + 1] = '\0';
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;

	j = alloc_me(&str, n);
	if (!j)
		return (NULL);
	while (n < -9 || n > 9)
	{
		str[j - 1] = absolute(n % 10) + 48;
		n = n / 10;
		j--;
	}
	str[j - 1] = absolute(n % 10) + 48;
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while (i < 5)
	printf("%s\n", ft_itoa(tab[i++]));

	return 0;
}*/
