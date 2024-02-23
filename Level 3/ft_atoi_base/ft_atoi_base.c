int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	flag = 1;
	int	res = 0;
	int	base_lower[] = "0123456789abcdef";
	int base_upper[] = "0123456789ABCDEF"

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

#include <stdio.h>

int	main(void)
{
	char str[] = "54abc";
	int	base = 16;
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}

/*int main() {
        const char *str = "1ABcdf";    
		int base = 16;    
		int resultado = ft_atoi_base(str, base);
    printf("El resultado de convertir '%s' a base %d es: %d\n", str, base, resultado);
    return 0;
}*/
