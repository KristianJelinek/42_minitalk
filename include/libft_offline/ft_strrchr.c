/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:13:09 by kjelinek          #+#    #+#             */
/*   Updated: 2023/09/16 17:09:18 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	char	*lastpointer;

	pointer = (char *)s;
	lastpointer = 0;
	while (*pointer)
	{
		if (*pointer == (char)c)
			lastpointer = pointer;
		pointer++;
	}
	if (c == '\0')
		return ((char *)pointer);
	return (lastpointer);
}
