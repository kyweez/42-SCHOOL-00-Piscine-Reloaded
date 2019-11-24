/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:28:57 by auboudie          #+#    #+#             */
/*   Updated: 2018/11/09 01:02:55 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_ex27.h"

#define BUFFER_SIZE 100

int		ft_display_file(char *file_name)
{
	int		file_descriptor;
	int		bytes_read;
	char	buffer[BUFFER_SIZE + 1];

	if ((file_descriptor = open(file_name, O_RDONLY)) == -1)
		return (1);
	while ((bytes_read = read(file_descriptor, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		ft_putstr_stdout(buffer);
	}
	if (bytes_read == -1)
		return (1);
	if ((close(file_descriptor)) == -1)
		return (1);
	return (0);
}
