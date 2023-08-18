#include <unistd.h>


int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str = argv[1];
        int i = 0;
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        while (str[i])
        {   
            write(1, &str[i], 1);
            if (str[i] == ' ' || str[i] == '\t')
            {
                while (str[i + 1] == ' ' || str[i + 1] == '\t')
                    i++;
            }
            i++;
        }    
    }
    write(1, "\n", 1);
    return (0);
}