/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 07:32:52 by zuzu              #+#    #+#             */
/*   Updated: 2025/10/31 12:05:46 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	size_t	size1;
	size_t	size2;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, size1 + 1);
	ft_strlcat(ptr, s2, size1 + size2 +1);
	return (ptr);
}
