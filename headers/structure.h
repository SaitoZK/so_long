/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:53:20 by aperron           #+#    #+#             */
/*   Updated: 2023/12/20 15:07:49 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct s_animation
{
	int		nb_frames;
	int		current_frame;
	int		time_update;
	int		timer;
}	t_animation;

typedef struct entity_frames
{
	void	**slime_frames;
}	t_entity_frames;

typedef struct s_game
{
	void			*mlx;
	void			*win;
	t_entity_frames	*entity_frames;
}	t_game;

#endif