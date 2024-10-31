/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:33:10 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/09/08 22:34:22 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	factorial;

	a = 1;
	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (a <= nb)
	{
		factorial *= a;
		a++;
	}
	return (factorial);
}
