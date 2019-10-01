/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:01:37 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/10/09 14:44:40 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_print_params(int argc, char **av)
{
	int a;

	a = 1;
	while (a < argc)
	{
		ft_putstr(av[a]);
		ft_putchar('\n');
		a++;
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
}
