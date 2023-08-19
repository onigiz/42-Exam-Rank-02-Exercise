#include <unistd.h>

char *lower_case(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}   


char *rstr_capitalizer(char *str)
{
    str = lower_case(str);
    int i = 0;
    while (str[i])
    {
        if ((str[i] != ' ' && str[i + 1] == ' ')
            && (str[i] <= 'z' && str[i] >= 'a'))
            str[i] = str[i] -32;
        if (str[i + 1] == '\0')
            str[i] = str[i] - 32;
        write(1, &str[i], 1);
        i++;
    }   
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 1;
        while (i <= ac)
        {
            rstr_capitalizer(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}