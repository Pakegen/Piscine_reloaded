/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:53:44 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/14 13:56:02 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int		i;
	char	*swp;

	i = 1;
	if (ac >= 2)
	{
		while (i + 1 < ac)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				swp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = swp;
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			i++;
		}
	}
}
