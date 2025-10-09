/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:44:59 by nisu              #+#    #+#             */
/*   Updated: 2025/10/09 11:59:41 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp_ptr;

	tmp_ptr = (unsigned char *)b;
	while (len > 0)
	{
		*tmp_ptr(++) = (unsigned char) c;
		len--;
	}
	return (b);
}
