#include <unistd.h>

void	ft_putnbr(int num)
{
	char digit;

	if (num >= 10)
		ft_putnbr(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

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
	return (res * sign);
}

int main(int argc, char **argv)
{
	int num;
	int mult = 1;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (mult <= 9)
		{
			ft_putnbr(mult);
			write(1, " X ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(mult * num);
			write(1, "\n", 1);
			mult++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
