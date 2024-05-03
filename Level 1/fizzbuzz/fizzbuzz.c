#include <unistd.h>

void	ft_putnbr(int num)
{
	char	digit;
	if (num >= 10)
		ft_putnbr(num / 10);
	digit = num % 10 + '0';
	write(1, &digit, 1);
}

int main()
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (num % 3 == 0)
			write(1, "fizz", 4);
		else if (num % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(num);
		write(1, "\n", 1);
		num++;
	}
	return (0);
}
