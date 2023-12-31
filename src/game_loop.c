/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:47:55 by aperron           #+#    #+#             */
/*   Updated: 2023/12/20 15:56:32 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	game_loop(t_game *game)
{
	update(game);
	draw(game);
	return (0);
}

int	on_keypress(int keycode, t_game *game)
{
	if (keycode == 53)
		exit(0);
	if (game)
		return (0);
	return (0);
}

int	update(t_game *game)
{
	if (game)
		return (0);
	return (0);
}

int	draw(t_game *game)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->entity_frames->slime_frames[3], TILE_SIZE, TILE_SIZE);
	if (game)
		return (0);
	return (0);
}
