/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:47:04 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/09/15 13:08:21 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (av[i] != '\0')
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
