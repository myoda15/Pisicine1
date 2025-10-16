/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:31:22 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/28 12:00:53 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[50] = "Hello World and world";
// 	char	dest[50];

// 	ft_strncpy(dest, src, 5);
// 	printf("dest -> %s\n", dest);

// 	ft_strncpy(dest, src, 15);
// 	printf("dest -> %s\n", dest);
// }