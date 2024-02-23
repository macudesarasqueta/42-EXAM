unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if (a == 0 || b == 0)
		write(1, "0", 1);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
