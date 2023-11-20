/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:11:47 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/28 10:11:30 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	lenght_s1;
	size_t	lenght_s2;
	size_t	total_s_lenght;
	char	*rtn;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	lenght_s1 = ft_strlen((char *)s1);
	lenght_s2 = ft_strlen(s2);
	total_s_lenght = lenght_s1 + lenght_s2 + 1;
	rtn = malloc(sizeof(char) * total_s_lenght);
	if (!rtn)
		return (0);
	ft_memmove(rtn, s1, lenght_s1);
	ft_memmove(rtn + lenght_s1, s2, lenght_s2);
	rtn[total_s_lenght - 1] = '\0';
	return (rtn);
}
