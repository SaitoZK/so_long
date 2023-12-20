/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:48:30 by aperron           #+#    #+#             */
/*   Updated: 2023/12/20 13:35:28 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	main(void)
{
	t_game	*game;

	game = init_game();
	mlx_hook(game->win, 2, 0, on_keypress, game);
	mlx_loop_hook(game->mlx, game_loop, game);
	mlx_loop(game->mlx);
	return (0);
}
