/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:18:57 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/08/13 13:14:34 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		main(void)
{
	char		*line;
	t_filler	*env;

	if (!(env = ft_memalloc(sizeof(t_filler))))
		return (-1);
	get_next_line(0, &line);
	env->user = (ft_atoi(line + 10) == 1) ? 'O' : 'X';
	while (69)
	{
		get_next_line(0, &line);
		env->y_map = ft_atoi(&line[8]);
		env->x_map = ft_atoi(&line[11]);
		get_map(env);
		if (algo(env) == 0)
			env->ko = 1;
		place_token(env);
		if (env->gameover == 1)
			break ;
	}
	free(env);
	return (0);
}
