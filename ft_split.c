/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 05:01:46 by zuzu              #+#    #+#             */
/*   Updated: 2025/10/28 10:27:06 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

static int	ft_allocate(char **tab, const char *s, char c)
{
	const char	*start;
	const char	*end;
	char		**ptr;

	ptr = tab;
	start = s;
	while (*start)
	{
		while (*start && *start == c)
			start++;
		if (!*start)
			break ;
		end = start;
		while (*end && *end != c)
			end++;
		*ptr = ft_substr(start, 0, end - start);
		if (!*ptr)
			return (0);
		ptr++;
		start = end;
	}
	*ptr = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**new_ptr;
	char	**temp;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	new_ptr = malloc(sizeof(char *) * (words + 1));
	if (!new_ptr)
		return (NULL);
	if (!ft_allocate(new_ptr, s, c))
	{
		temp = new_ptr;
		while (*temp)
			free(*temp++);
		free(new_ptr);
		return (NULL);
	}
	return (new_ptr);
}
