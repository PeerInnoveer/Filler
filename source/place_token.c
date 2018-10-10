/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:19:28 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/08/16 12:53:22 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	place_token(t_filler *env)
{
	if (env->algo == 0)
		env->algo = 3;
	else if (env->algo == 1)
		env->algo = 2;
	else if (env->algo == 2)
		env->algo = 1;
	else if (env->algo == 3)
		env->algo = 0;
	if (env->ko == 1)
	{
		env->gameover = 1;
		ft_putnbr(env->place_y);
		ft_putchar(' ');
		ft_putnbr(env->place_x);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(env->place_y);
		ft_putchar(' ');
		ft_putnbr(env->place_x);
		ft_putchar('\n');
	}
}
