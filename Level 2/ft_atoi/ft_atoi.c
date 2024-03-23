int	ft_atoi(const char *str)
{
	int	i = 0;
	int	sign = 1;
	int	res = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
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

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char str[] =  "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
