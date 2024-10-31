/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 05:33:14 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/09/10 22:52:21 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_board(int board[10])
{
	int	i;
	int	c;

	i = 0;
	while (i < 10)
	{ 
		c = board[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_can_i_place_it_here(int board[10], int r, int c)
{
	int	i;

	i = 0;
	while (i < r)
	{
		if ((board[i] == c || board[i] - i == c - r || board[i] + i == c + r))
			return (0);
		i++;
	}
	return (1);
}

void	solve(int board[10], int r, int *ptdr)
{
	int	i;

	if (r == 10)
	{
		print_board(board);
		(*ptdr)++;
		return ;
	}
	i = 0;
	while (i < 10)
	{
		if (ft_can_i_place_it_here(board, r, i))
		{
			board[r] = i;
			solve(board, r + 1, ptdr);
			board[r] = 0;
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	board[10];
	int	count;

	count = 0;
	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
	solve(board, 0, &count);
	return (count);
}
int	main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}