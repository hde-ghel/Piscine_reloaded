/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:22:12 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/10/09 12:30:09 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (res < nb)
	{
		i++;
		res = i * i;
	}
	if (res == nb)
		return (i);
	else
		return (0);
}
