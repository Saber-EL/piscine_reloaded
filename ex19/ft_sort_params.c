/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchatoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:09:11 by zchatoua          #+#    #+#             */
/*   Updated: 2018/10/03 18:21:26 by zchatoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	if (!(str1[i]) || !(str2[i]))
		return (str1[i] - str2[i]);
	while (str2[i] || str1[i])
	{
		if (str1[i] - str2[i] != 0)
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	while (1337)
	{
		i = 0;
		j = 1;
		while (j < (argc - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				i = 1;
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		if (i == 0)
			return ;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		ft_swap(argc, argv);
		while (argv[i])
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
