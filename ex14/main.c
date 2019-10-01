/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:37:30 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/10/05 12:13:18 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	printf("4 = %d\n", ft_sqrt(4));
	printf("9 = %d\n", ft_sqrt(9));
	printf("16 = %d\n", ft_sqrt(16));
	printf("25 = %d\n", ft_sqrt(25));
	printf("-9 = %d\n", ft_sqrt(-9));
	printf("10 = %d\n", ft_sqrt(10));
	printf("0 = %d\n", ft_sqrt(0));
}
