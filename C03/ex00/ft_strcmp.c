/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:15:53 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/25 14:59:43 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("abc", "abc"));
// 	printf("%d\n", ft_strcmp("abc", "abz"));
// 	printf("%d\n", ft_strcmp("abd", "abc"));
// 	printf("%d\n", ft_strcmp("abc", "ab"));
// 	printf("%d\n", ft_strcmp("ab", "abc"));
// 	printf("%d\n", ft_strcmp("", ""));
// 	printf("%d\n", ft_strcmp("\xFF", "\x7F"));
// 	return (0);
// }
