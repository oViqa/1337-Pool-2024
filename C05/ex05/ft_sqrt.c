/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:37:59 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/09/10 05:48:59 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (nb);
	while (root * root <= nb)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
