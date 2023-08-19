#include <unistd.h>

int atoi(char *number)
{
    int i = 0;
    int result = 0;
    while (number[i])
    {
        result = (result * 10) + (number[i] - 48);
        i++;
    }
    return (result);
}

int nb_len(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return (i);
}

#include <stdio.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        char hex[17] = "0123456789abcdef";
        int nb = atoi(av[1]);
        int len = nb_len(av[1]);
        
        
    }
    write(1, "\n", 1);
    return (0);
    }