/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:31:54 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/28 11:50:25 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("aaaaaaaaaaaaaaAAAAaaaaaaaa"));
// 	printf("%d\n", ft_str_is_alpha("abc123"));
// 	printf("%d\n", ft_str_is_alpha("zZZZzzzz"));
// 	return (0);
// }
