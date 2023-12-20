/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:04:53 by aperron           #+#    #+#             */
/*   Updated: 2023/12/20 15:56:00 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	**get_slime_frames(void *mlx)
{
	void	**frames;
	int		size;

	size = TILE_SIZE;
	frames = malloc(6 * sizeof(void *));
	frames[0] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_0.xpm", &size, &size);
	frames[1] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_1.xpm", &size, &size);
	frames[2] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_2.xpm", &size, &size);
	frames[3] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_3.xpm", &size, &size);
	frames[4] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_4.xpm", &size, &size);
	frames[5] = mlx_xpm_file_to_image(mlx,
			"img/xpm/slime/slime_5xpm", &size, &size);
	return (frames);
}

t_entity_frames	*get_frames(void *mlx)
{
	t_entity_frames	*frames;

	frames = malloc(1 * sizeof(t_entity_frames *));
	frames->slime_frames = get_slime_frames(mlx);
	return (frames);
}
