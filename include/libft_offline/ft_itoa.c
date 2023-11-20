/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:08:48 by kjelinek          #+#    #+#             */
/*   Updated: 2023/09/20 08:53:54 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_number_size(int number)
{
	unsigned int	lenght;

	lenght = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		lenght += 1;
	while (number != 0)
	{
		number /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	len;

	len = ft_number_size(n);
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n == 0)
	{
		*s = '0';
	}
	else if (n < 0)
	{
		*s = '-';
		n = -n;
	}
	while (n)
	{
		s[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
