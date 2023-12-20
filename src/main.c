/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:48:30 by aperron           #+#    #+#             */
/*   Updated: 2023/12/20 10:11:39 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int main(void)
{
	void	*mlx;
	void	*win;
	t_game	*game;

	game = malloc(sizeof(*game));
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 500, "WINDOW");
	mlx_hook(win, 2, 0, on_keypress, game);
	mlx_loop_hook(mlx, update, game);
	mlx_loop_hook(mlx, draw, game);
	mlx_loop(mlx);
	return (0);
}
