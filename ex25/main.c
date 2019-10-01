/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:52:47 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/10/07 15:09:02 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	putnbr(int n)
{
	printf(" %d", n);
}

int	main(void)
{
	int	test1[] = {1, 2, 3, 4, 5};
	int test2[] = {-1, -2, -3, -4};
	int test3[] = {-42, 19, -19, 521456};

	ft_foreach(test1, 5, putnbr);
	printf("\n");
	ft_foreach(test2, 4, putnbr);
	printf("\n");
	ft_foreach(test3, 4, putnbr);
}
