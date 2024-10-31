/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 06:09:46 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/08/29 13:31:46 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (tab[i] <= 9)
			ft_putchar(tab[i] + '0');
		else
			ft_putchar(tab[i] - 10 + ':');
		i++;
	}
}

void	update_tab(int *tab, int n)
{
	int	i;

	i = n - 1;
	tab[i]++;
	while (i > 0 && tab[i] > (9 + i))
	{
		tab[i - 1]++;
		tab[i] = tab[i - 1] + 1;
		i--;
	}
}

void	initialize_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n <= 0 || n >= 10)
		return ;
	initialize_tab(tab, n);
	while (tab[0] <= (10 - n))
	{
		print_combination(tab, n);
		if (tab[0] != (10 - n) || tab[n - 1] != 9 + n - 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		update_tab(tab, n);
	}
	ft_putchar('\n');
}

