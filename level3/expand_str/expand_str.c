#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str = argv[1];
        int i = 0;
        int spc = 0;
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        while (str[i])
        {   
            if (str[i] == ' ' || str[i] == '\t')
            {
                write (1, "   ", 3);
                i++;
            }
            else
            {
                write(1, &str[i], 1);
                i++;
            }
        }    
    }
    write(1, "\n", 1);
    return (0);
}