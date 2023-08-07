#include <unistd.h>

int fstrlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    
    return (i);
}

int main(int argc, char **argv)
{
    if(argc != 2)
        write(1, "\n", 1);
    else
    {
        int len = fstrlen(argv[1]);

        while (len >= 0)
        {
            write(1, &argv[1][len], 1);
            len--;
        }
        write(1, "\n", 1);
        
    }

}