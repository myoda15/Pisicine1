/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 11:21:12 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/27 13:43:50 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

// int	main(void)
// {
// 	ft_is_negative(0);
// 	write(1, "\n", 1);
// 	ft_is_negative(1);
// 	write(1, "\n", 1);
// 	ft_is_negative(-1);
// 	write(1, "\n", 1);
// }
