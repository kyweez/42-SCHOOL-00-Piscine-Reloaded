/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_stderr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:32:50 by auboudie          #+#    #+#             */
/*   Updated: 2018/11/08 22:04:31 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ex27.h"

void	ft_putstr_stderr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_stderr(str[i]);
		i++;
	}
}
