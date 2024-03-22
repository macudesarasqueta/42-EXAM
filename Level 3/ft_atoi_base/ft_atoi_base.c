int	get_digit(char c, int digit_base)
{
	int max_digit;
	if (digit_base <= 10)
		max_digit = digit_base + '0';
	else
		max_digit = digit_base - 10 + 'a';
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else
		return (-1);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	//char base_lower[] = "0123456789abcdef";
	//char base_upper[] = "0123456789ABCDEF";
	int i = 0;
	int flag = 1;
	char digit;
	int res = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		flag = -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		res = (res * str_base) + (digit * flag);
		i++;
	}
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "-12FDB3"; //-1244595
	char str2[] = "58887FFA"; //1485340666
	char str3[] = "eed84"; //978308
	char str4[] = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base." "16"; //3308
	printf("%d\n", ft_atoi_base(str2, base));
	return (0);
}*/
