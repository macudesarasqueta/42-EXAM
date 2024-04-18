int	char_is_in_base(char c, int str_base)
{
	static char *base = "0123456789abcdef";
	static char *BASE = "0123456789ABCDEF";
	int	i = 0;

	while (base[i] && i < str_base)
	{
		if (c == base[i])
			return (1);
		if (c == BASE[i])
			return (1);
		i++;
	}
	return (0);
}

int	atoi_get_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (10 + c - 'a');
	return (10 + c - 'A');
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int flag = 1;
	int res = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		flag = -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (char_is_in_base(str[i], str_base))
	{
		res = res * str_base + atoi_get_value(str[i]);
		i++;
	}
	return (res * flag);
}

/*#include <stdio.h>

int	main()
{
	const char	*str = "1A3df";
	int	base = 16;
	int	result = ft_atoi_base(str, base);
	printf("Resultado: %d\n", result);
}*/
