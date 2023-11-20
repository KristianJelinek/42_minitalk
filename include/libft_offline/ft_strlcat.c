/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:59:57 by kjelinek          #+#    #+#             */
/*   Updated: 2023/09/05 18:43:11 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	if ((!dst || !src) && !size)
		return (0);
	dest_len = ft_strlen(dst);
	j = dest_len;
	i = 0;
	if (dest_len <= (size - 1) && size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_len > size)
		dest_len = size;
	return (dest_len + ft_strlen(src));
}