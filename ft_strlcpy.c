/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 03:27:28 by zuzu              #+#    #+#             */
/*   Updated: 2025/10/12 04:22:52 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize > src_len)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
		ft_memcpy(dst, src, dstsize - 1);
	dst[dstsize - 1] = '\0';
	return (src_len);
}
