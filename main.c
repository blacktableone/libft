/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:14:10 by zuzu              #+#    #+#             */
/*   Updated: 2025/10/12 04:26:30 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	dst[6];
	size_t	len;

	// printf("=== test ft_isalpha ===\n");
	// printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
	// printf("ft_isalpha('0') = %d\n", ft_isalpha('0'));
	// printf("ft_isalpha('?') = %d\n", ft_isalpha('?'));
	// printf("\n")
	// printf("=== test ft_isdigit ===\n");
	// printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
	// printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
	// printf("ft_isdigit('2') = %d\n", ft_isdigit('2'));
	// printf("ft_isdigit('!') = %d\n", ft_isdigit('!'));
	// printf("\n")
	// printf("=== test ft_isalnum ===\n");
	// printf("ft_isalnum('0') = %d\n", ft_isalnum('0'));
	// printf("ft_isalnum('t') = %d\n", ft_isalnum('t'));
	// printf("ft_isalnum('+') = %d\n", ft_isalnum('+'));
	// printf("\n")
	// printf("=== test ft_isascii ===\n");
	// printf("ft_isascii('0') = %d\n", ft_isascii('0'));
	// printf("ft_isascii('-') = %d\n", ft_isascii('-'));
	// printf("ft_isascii(127) = %d\n", ft_isascii(127));
	// printf("\n")
	// printf("=== test ft_isprint ===\n");
	// printf("ft_isprint('A') = %d\n", ft_isprint('A'));
	// printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
	// printf("ft_isprint('~') = %d\n", ft_isprint('~'));
	// printf("ft_isprint('\\n') = %d\n", ft_isprint('\n'));
	// printf("ft_isprint(127) = %d\n", ft_isprint(127));
	// printf("\n")
	// printf("=== test ft_strlen ===\n");
	// printf("len of 'hello' is %zu\n", ft_strlen("hello"));
	// printf("len of 'hello\n' is %zu\n", ft_strlen("hello\n"));
	// printf("len of '' is %zu\n", ft_strlen(""));
	// printf("\n");
	// printf("=== test ft_memset ===\n");
	// char arr[5];
	// ft_memset(arr,'A',5);
	// for (int i = 0;i < 5; i++)
	// 	printf("%c",arr[i]);
	// printf("\n");
	// printf("=== test ft_bzero ===\n");
	// char arr[5];
	// ft_bzero(arr, 5);
	// for (int i = 0; i < 5; i++)
	// 	printf("%d", arr[i]);
	// printf("\n");
	// printf("=== test ft_memcpy ===\n");
	// ft_memcpy(dst, src, 6);
	// printf("dst = %s\n", dst);
	// printf("src = %s\n", src);
	printf("\n");
	printf("=== test ft_strlcpy ===\n");
	len = ft_strlcpy(dst, "HelloWorld", sizeof(dst));
	printf("dst='%s', src length=%zu\n", dst, len);
	return (0);
}
