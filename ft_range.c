/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:08:17 by auboudie          #+#    #+#             */
/*   Updated: 2018/11/07 13:33:35 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;
	int array_size;

	array_size = max - min;
	if (min >= max || max - min < 0)
		return (0);
	if (!(array = malloc(sizeof(int) * array_size)))
		return (0);
	i = 0;
	while (i < array_size)
		array[i++] = min++;
	return (array);
}
