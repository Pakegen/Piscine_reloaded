/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:21:49 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/15 14:26:33 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef

#include<ft_point.h>

#endif

void	set_point(t_point *point)
{
	point ->x = 42;
	point ->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("%d", point.x);
}
