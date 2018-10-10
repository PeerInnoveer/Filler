/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_struct.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:53:53 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/08/16 12:38:16 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_STRUCT_H
# define FILLER_STRUCT_H

# include "filler.h"

typedef struct	s_filler
{
	char	user;
	char	oppon;
	int		x_map;
	int		y_map;
	char	**map;
	int		x_token;
	int		y_token;
	char	**token;
	int		u_pos_x;
	int		u_pos_y;
	int		o_pos_x;
	int		o_pos_y;
	int		place_x;
	int		place_y;
	int		algo;
	int		ko;
	int		gameover;
}				t_filler;

#endif
