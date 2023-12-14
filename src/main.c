/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:48:30 by aperron           #+#    #+#             */
/*   Updated: 2023/12/14 17:49:55 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int main(void)
{
	char *s = get_next_line(open("test.txt", O_RDONLY));
	ft_strrev(s);
	ft_printf("YOU GOT: %s\n", s);
	return 0;
}
