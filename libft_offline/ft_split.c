/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:51:33 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/30 13:10:09 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_parts(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static	char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
			dest[i] = 0;
		i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		parts;
	char	*start;
	int		i;

	parts = ft_count_parts(s, c);
	str = (char **)malloc(sizeof(char *) * (parts + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < parts)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		str[i] = (char *)malloc(s - start + 1);
		if (!str[i])
			return (0);
		ft_strncpy(str[i], start, s - start);
		str[i++][s - start] = 0;
	}
	str[i] = 0;
	return (str);
}
