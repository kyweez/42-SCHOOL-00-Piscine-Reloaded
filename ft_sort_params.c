/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 07:20:30 by auboudie          #+#    #+#             */
/*   Updated: 2018/11/07 11:16:17 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap_str(char **str1, char **str2)
{
	char *tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int		main(int argc, char **argv)
{
	int i;
	int flag_sorted;

	i = 1;
	flag_sorted = 0;
	while (flag_sorted == 0)
	{
		flag_sorted = 1;
		while (i <= (argc - 1) - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap_str(&argv[i], &argv[i + 1]);
				flag_sorted = 0;
			}
			i++;
		}
		i = 1;
	}
	while (i <= argc - 1)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
