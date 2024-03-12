#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648");
	int n = nbr;
	int len = 0;
	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	char *res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		len--;
		res[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}

/*#include <stdio.h>

int main()
{
	char *num;
	num = ft_itoa(-4568486);
	printf("%s\n", num);
	return (0);
}*/
