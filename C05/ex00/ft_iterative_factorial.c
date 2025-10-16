/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:54:07 by mande-so          #+#    #+#             */
/*   Updated: 2025/10/13 14:45:43 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	b;

	a = nb;
	b = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (b > 0)
	{
		a = a * b;
		b--;
	}
	return (a);
}

/* int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
 */