#include <unistd.h>

void write_n(int num)
{
	char str[10] = "0123456789";

	if (num > 9)
		write_n(num / 10);
	write (1, &str[num % 10], 1);
}

int	main(void)
{
	int n;
	while (n >= 1 && n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else
			write_n(n);
		n++;
		write(1, "\n", 1);
	}
	return (0);
}

int	main(void)
{
	ft_fizzbuzz
}
