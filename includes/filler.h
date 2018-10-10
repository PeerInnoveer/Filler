/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:53:34 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/09/06 08:14:46 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "filler_struct.h"

int		get_map(t_filler *env);

int		get_token(t_filler *env, char *line);

int		algo(t_filler *env);

void	position(t_filler *env);

int		try_token(t_filler *env, int i, int j);

void	place_token(t_filler *env);

#endif
