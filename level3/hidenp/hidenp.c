#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int len = slen(av[1]);
        int check = 0;
        int i = 0;
        int c = 0;
        while (av[1][i] && av[2][c])
        {
            if(av[1][i] == av[2][c])
            {
                i++;
            }
            c++;
        }
        if (av[1][i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);    
    }
    write(1, "\n", 1);
    return (0);
}