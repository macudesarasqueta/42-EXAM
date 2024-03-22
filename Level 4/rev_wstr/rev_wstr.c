#include <unistd.h> 

void rev_wstr(char *str) 
{ 
        int i = 0;
        int j = 0;

        while (str[i]) 
                i++; 
        i--; 
        while (i >= 0) 
        { 
                while (str[i] > 32 && str[i] < 127) 
                        i--; 
                j = i + 1; 
                while (str[j] > 32 && str[i] < 127) 
                { 
                        write(1, &str[j], 1); 
                        j++; 
                } 
                if (str[i] == 32) 
                { 
                        write(1, " ", 1); 
                        i--; 
                } 
        } 
}

int     main(int argc, char **argv) 
{ 
        if (argc == 2) 
                rev_wstr(argv[1]); 
        write(1, "\n", 1); 
        return (0); 
}
