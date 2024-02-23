#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int n)
{
	char digit;
	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	res = 0;

	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int tab_mult(int num_atoi)
{
	int	mult = 1;

	while (mult <= 9)
	{
		ft_putnbr(mult);
		write(1, " X ", 3);
		ft_putnbr(num_atoi);
		write(1, " = ", 3);
		ft_putnbr(mult * num_atoi);
		write(1, "\n", 1);
		mult++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	//int	mult = 1;
	int num_atoi;
		
	if (argc == 2)
		num_atoi = tab_mult(ft_atoi(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}
