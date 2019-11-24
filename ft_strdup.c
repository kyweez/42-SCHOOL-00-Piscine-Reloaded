/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:24:05 by auboudie          #+#    #+#             */
/*   Updated: 2018/11/07 11:58:56 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		len_src;
	int		i;
	char	*dest;

	len_src = 0;
	i = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (!(dest = (char*)malloc(sizeof(char) * (len_src + 1))))
		return (0);
	while (i < len_src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
