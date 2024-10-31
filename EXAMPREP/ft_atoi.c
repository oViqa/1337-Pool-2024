#include <stdio.h>
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i])
	{
		i++;
	}
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else
		{
			i++;
		}
	}
	while ((str[i] >= '0' &&str[i] <= '9') && (str[i]))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign*result);
}

int main()
{
	printf("%d\n", ft_atoi("       --+-+-+-+-+-++-+1212121hiba"));
}