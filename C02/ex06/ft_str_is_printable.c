/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:33:12 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/23 12:50:05 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("\n"));
// 	printf("%d\n", ft_str_is_printable("hello"));
// 	printf("%d\n", ft_str_is_printable(" "));
// 	printf("%d\n", ft_str_is_printable("~"));
// }
