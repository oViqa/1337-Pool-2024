#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0)
		{
			ft_putstr("fizz");
		}
		else if (nb % 5 == 0)
		{
			ft_putstr("buzz");
		}
		else if (nb % 5 == 0 && nb % 3 == 0)
		{
			ft_putstr("fizzbuzz");
		}
		else
		{
			ft_putnbr(nb);
		}
        write(1, "\n", 1);
        nb++;
	}
}

write(1, 1\n2\3\nfizz...100\n, number of digits)