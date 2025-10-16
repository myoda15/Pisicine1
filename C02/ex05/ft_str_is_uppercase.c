/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:32:52 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/23 12:49:59 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("HELLO"));
// 	printf("%d\n", ft_str_is_uppercase("hello"));
// }
