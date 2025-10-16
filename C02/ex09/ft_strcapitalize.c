/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 19:21:10 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/29 20:39:00 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	neword;

	i = 0;
	neword = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (neword == 1)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] -32;
				neword = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else
			neword = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "ola lisboa, 42lisbOa";
	ft_strcapitalize(str);
	printf("%s\n", str);
}
