/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 02:53:14 by zuzu              #+#    #+#             */
/*   Updated: 2025/10/13 03:42:47 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnst(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	n = ft_strlen(needle);
	while (*haystack && n <= len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, n) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
