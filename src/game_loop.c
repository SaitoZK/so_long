/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:47:55 by aperron           #+#    #+#             */
/*   Updated: 2023/12/20 10:15:58 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	on_keypress(int keycode, t_game *game)
{
	if (keycode == 53)
		exit(0);
	ft_printf("Key pressed: %d\n", keycode);
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
	if (game)
		return (0);
	return (0);
}
