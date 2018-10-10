/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_token.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:20:02 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/08/16 12:20:07 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		get_token(t_filler *env, char *line)
{
	int		n;
	int		i;

	n = 6;
	i = 0;
	env->y_token = ft_atoi(&line[6]);
	while (ft_isdigit(line[n]))
		n++;
	n++;
	env->x_token = ft_atoi(&line[n]);
	if (!env->token)
		if (!(env->token = ft_strnew_two(env->y_token, env->x_token)))
			return (-1);
	while (i < env->y_token)
	{
		get_next_line(0, &line);
		env->token[i] = ft_strdup(line);
		i++;
	}
	return (0);
}
