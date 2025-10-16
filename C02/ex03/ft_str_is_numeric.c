/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:32:18 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/24 14:24:26 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("12313312"));
// 	printf("%d\n", ft_str_is_numeric("askdha234567"));
// 	printf("%d\n", ft_str_is_numeric("9999"));
// 	return (0);
// }
