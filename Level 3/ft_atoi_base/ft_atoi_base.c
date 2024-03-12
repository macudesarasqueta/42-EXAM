char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	flag = 1;
	int	res = 0;
	char base_lower[] = "0123456789abcdef";
	char base_upper[] = "0123456789ABCDEF";
    	int digit;

	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		flag = -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * flag);
		i++;
	}
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "54abc";
	int	base = 16;
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}*/
