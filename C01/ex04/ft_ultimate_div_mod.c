/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:16:40 by mande-so          #+#    #+#             */
/*   Updated: 2025/09/27 18:29:22 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

int	main(void)
{
	int	x = 20;
	int	y = 10;
	int	*a = &x;
	int	*b = &y;

	ft_ultimate_div_mod(a, b);
	printf("%d %d\n", *a, *b);
}
