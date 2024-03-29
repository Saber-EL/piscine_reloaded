/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchatoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:09:28 by zchatoua          #+#    #+#             */
/*   Updated: 2018/10/04 09:26:35 by zchatoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i <= nb / 2)
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
		return (0);
	}
}
