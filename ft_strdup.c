/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 04:58:35 by zuzu              #+#    #+#             */
/*   Updated: 2025/10/30 16:31:00 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	s;

	s = ft_strlen(s1) + 1;
	p = malloc(sizeof(char) * s);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, s);
	return (p);
}
