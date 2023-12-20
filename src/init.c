/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:31:15 by aperron           #+#    #+#             */
/*   Updated: 2023/12/20 15:54:31 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

t_game	*init_game(void)
{
	t_game	*game;

	game = malloc(sizeof(*game));
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx,
			WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME);
	game->entity_frames = get_frames(game->mlx);
	return (game);
}

t_animation	*get_slime(void)
{
	t_animation	*slime;

	slime = malloc(sizeof(t_animation *));
	slime->nb_frames = 1;
	slime->current_frame = 0;
	slime->timer = 0;
	slime->time_update = 500;
	return (slime);
}
