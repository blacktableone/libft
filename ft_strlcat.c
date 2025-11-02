/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 04:32:00 by zuzu              #+#    #+#             */
/*   Updated: 2025/11/02 13:22:34 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	cp_len;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	if (!dst || !src)
		return (0);
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (d_len >= dstsize)
		return (dstsize + s_len);
	cp_len = dstsize - d_len - 1;
	if (s_len < cp_len)
		cp_len = s_len;
	if (cp_len > 0)
		ft_memcpy(dst + d_len, src, cp_len);
	dst[d_len + cp_len] = '\0';
	return (d_len + s_len);
}
