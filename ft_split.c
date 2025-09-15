/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:31:33 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 15:31:18 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*alloc_word(const char **s, char c)
{
	size_t	len;
	size_t	i;
	char	*w;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	w = (char *)malloc(len + 1);
	if (!w)
		return (NULL);
	i = 0;
	while (i < len)
	{
		w[i] = (*s)[i];
		i++;
	}
	w[len] = '\0';
	*s += len;
	return (w);
}

static void	*free_all(char **arr, size_t used)
{
	size_t	i;

	i = 0;
	while (i < used)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;
	size_t	k;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	k = 0;
	while (k < words)
	{
		while (*s && *s == c)
			s++;
		res[k] = alloc_word(&s, c);
		if (!res[k])
			return ((char **)free_all(res, k));
		k++;
		if (*s == c)
			s++;
	}
	res[k] = NULL;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s = "Hello 42 Bangkok";
// 	char **arr = ft_split(s, ' ');
// 	int i = 0;

// 	while (arr[i])
// 	{
// 		printf("word[%d] = %s\n", i, arr[i]);
// 		free(arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }