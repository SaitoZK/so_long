/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:50:17 by aperron           #+#    #+#             */
/*   Updated: 2023/12/20 15:16:01 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../lft/libft.h"
# include "../mlx/mlx.h"

# include "structure.h"
# include "globals.h"

int					game_loop(t_game *game);

int					on_keypress(int keycode, t_game *game);

int					update(t_game *game);

int					draw(t_game *game);

t_game				*init_game(void);

t_entity_frames		*get_frames(void *mlx);

#endif