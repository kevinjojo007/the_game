/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 06:51:42 by jchichep          #+#    #+#             */
/*   Updated: 2014/08/05 03:30:53 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"perso.h"
#include	"function.h"

int				main(void)
{
	t_perso		perso;

	set_raw_mode();
	intro();
	init_carac(&(perso.carac), &(perso.argent));
	init_argent(&(perso.argent));
	init_equip(&perso.equip);
	init_info(&(perso.info));
	show_carac(&(perso.carac), &(perso.argent));
	unset_raw_mode();
	return (0);
}
