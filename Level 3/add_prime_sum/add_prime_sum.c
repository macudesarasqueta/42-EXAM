#include <unistd.h>

void	put_num(int num)
{
	char	digit;

	if (num >= 10)
		put_num(num / 10);
	digit = num % 10 + '0';
	write(1 , &digit, 1);
}

int	is_prime(int num)
{
	int	i = 2;

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
	int	i = 0;
	int	res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int num;
	int	sum = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (num > 0)
		{
			if (is_prime(num))
				sum = num + sum;
			num--;
		}
		put_num(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
