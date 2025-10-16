/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:04:37 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/25 14:59:40 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("abcdef", "abcdxyz", 3));
// 	printf("%d\n", ft_strncmp("abc", "abz", 1));
// 	printf("%d\n", ft_strncmp("abcdefj", "abcdefz", 10));
// 	printf("%d\n", ft_strncmp("abc", "ab", 1));
// 	printf("%d\n", ft_strncmp("ab", "abc", 5));
// 	printf("%d\n", ft_strncmp("abcdef", "abcabc", 8));
// 	return (0);
// }
