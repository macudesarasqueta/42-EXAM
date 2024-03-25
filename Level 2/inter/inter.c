#include <unistd.h>

int is_char_in_str(char c, char *str) 
{
	while (*str) 
	{
		if (*str == c)
            		return 1;
        	str++;
    	}
	return 0;
}

int main(int argc, char **argv) 
{
	char *str1 = argv[1];
    	char *str2 = argv[2];
   	char char_found[256] = {0}; // Array para marcar caracteres encontrados

	if (argc == 3)
	{
    		while (*str1) 
		{
        		if (is_char_in_str(*str1, str2) && !char_found[(unsigned char)*str1])
			{
            			write(1, str1, 1);
            			char_found[(unsigned char)*str1] = 1; // Marcar el carácter como encontrado
        		}
        		str1++;
    		}
	}
	write(1, "\n", 1);
	return 0;
}
