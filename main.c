/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:39:30 by auboudie          #+#    #+#             */
/*   Updated: 2018/11/08 22:04:40 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ex27.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc == 1)
			ft_putstr_stderr("File name missing.\n");
		else
			ft_putstr_stderr("Too many arguments.\n");
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
