/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:07:36 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/10/07 18:45:16 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*));

int	ft_is_neg(char *tab)
{
	if (tab[0] != '9')
	return (1);

	return (0);
}

int	main(void)
{
	char *tab[] = {"1", "5", "4", "9", "0", NULL};
	printf("4 vs %d\n", ft_count_if(tab, &ft_is_neg));
	char *tab2[] = {"9", "4", "9", "9", "0", NULL};
	printf("2 vs %d\n", ft_count_if(tab2, &ft_is_neg));
	char *tab3[] = {"9", "5", NULL};
	printf("1 vs %d\n", ft_count_if(tab3, &ft_is_neg));
	char *tab4[] = {"1", "5", "9", "0", NULL};
	printf("3 vs %d\n", ft_count_if(tab4, &ft_is_neg));
	return (0);
}
