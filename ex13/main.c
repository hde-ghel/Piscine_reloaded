/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:29:24 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/10/05 20:20:30 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("10 %d\n", ft_recursive_factorial(10));
	printf("12 %d\n", ft_recursive_factorial(12));
	printf("-2 %d\n", ft_recursive_factorial(-2));
	printf("13 %d\n", ft_recursive_factorial(13));
	printf("11 %d\n", ft_recursive_factorial(11));
}
