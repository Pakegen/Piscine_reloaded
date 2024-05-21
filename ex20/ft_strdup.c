/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:40:39 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/14 15:50:37 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_dup(char *src, char *dest)
{
	int	i;
	int	k;

	i = 0;
	k = ft_strlen(src);
	dest[k] = '\0';
	while (i < k)
	{
		dest[i] = '\0';
		i++;
	}
	i = 0;
	while (i < k)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
	{
		return (0);
	}
	ft_dup(src, dest);
	return (dest);
}
