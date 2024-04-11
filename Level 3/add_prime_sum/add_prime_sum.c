#include <unistd.h>

void	ft_putnbr(int num)
{
	if (num >= 10)
		ft_putnbr(num / 10);
	char digit = num % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int num)
{
	int i = 2;

	if (num == 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int num = 0;

	while (str[i])
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

int main(int argc, char **argv)
{
	int num;
	int sum;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (num > 0)
		{
			if (is_prime(num))
				sum = sum + num;
			num--;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
