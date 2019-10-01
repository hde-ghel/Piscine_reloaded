/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:56:11 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/10/05 12:25:38 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 25;
	b = 2;
	printf("avent swap : %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("apres swap : %d, %d\n", a, b);
	return (0);
}
