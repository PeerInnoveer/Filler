/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:19:44 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/08/16 12:29:56 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	get_map(t_filler *env)
{
	char	*line;
	int		i;

	i = 0;
	if (!env->map)
		if (!(env->map = ft_strnew_two(env->y_map, env->x_map)))
			return (-1);
	get_next_line(0, &line);
	while (i <= env->y_map)
	{
		get_next_line(0, &line);
		if (ft_isdigit(line[0]))
			env->map[i] = ft_strdup(line + 4);
		else
			get_token(env, line);
		i++;
	}
	if (env->o_pos_x == 0 && env->o_pos_y == 0 &&
			env->u_pos_x == 0 && env->u_pos_y == 0)
		position(env);
	return (0);
}
