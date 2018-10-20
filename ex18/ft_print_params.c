/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchatoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:04:17 by zchatoua          #+#    #+#             */
/*   Updated: 2018/10/03 18:08:31 by zchatoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int arc, char **arv)
{
	int i;
	int j;

	i = 1;
	while (i < arc)
	{
		j = 0;
		while (arv[i][j])
			ft_putchar(arv[i][j++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
