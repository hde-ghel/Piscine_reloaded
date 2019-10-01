/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:50:18 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/10/09 15:00:52 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			return (*(unsigned char*)(s1) - *(unsigned char*)s2);
		s1++;
		s2++;
	}
	return (*(unsigned char*)(s1) - *(unsigned char*)s2);
}

void	ft_sort_params(int ac, char **av)
{
	int		a;
	char	*tmp;

	a = 1;
	tmp = 0;
	while (a < ac - 1)
	{
		if (ft_strcmp(av[a], av[a + 1]) <= 0)
		{
			a++;
		}
		else
		{
			tmp = av[a];
			av[a] = av[a + 1];
			av[a + 1] = tmp;
			a = 1;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i != argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
