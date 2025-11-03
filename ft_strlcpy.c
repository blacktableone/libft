/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 03:27:28 by zuzu              #+#    #+#             */
/*   Updated: 2025/11/03 12:20:33 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  len;

    len = ft_strlen(src);
    if (dstsize == 0)
        return (len);
    if (len >= dstsize)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = '\0';
    }
    else
        ft_memcpy(dst, src, len + 1);
    return (len);
}
