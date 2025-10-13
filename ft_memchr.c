/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 01:45:37 by zuzu              #+#    #+#             */
/*   Updated: 2025/10/13 02:23:10 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		uc;
	const unsigned char	*p;

	uc = (unsigned char)c;
	p = (const unsigned char *)s;
	while (n--)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
