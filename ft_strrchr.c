/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 05:48:03 by zuzu              #+#    #+#             */
/*   Updated: 2025/11/03 12:20:50 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    unsigned char   uc;
    const char      *last;

    uc = (unsigned char)c;
    last = NULL;
    while (*s)
    {
        if ((unsigned char)*s == uc)
            last = s;
        s++;
    }
    if (uc == '\0')
        last = s;
    return ((char *)last);
}

