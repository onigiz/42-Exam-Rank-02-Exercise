#include <unistd.h>

char  *lower_case(char *str)
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

void *str_capitalizer(char *str)
{
    int i = 0;
    int space_check = 1;
    str = lower_case(str);
    if (str[i] <= 'z' && str[i] >= 'a')
        str[i] = str[i] - 32;
    while (str[i])
    {
        if((str[i] == ' ' && str[i+1] != ' ') 
            && (str[i + 1] <= 'z' && str[i + 1] >= 'a'))
            str[i + 1] = str[i + 1] - 32;
    
        write(1, &str[i], 1);
        i++;
    } 
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 1;
        while (i <= ac)
        {
            str_capitalizer(av[i]);
            i++;
        }   
    }
    write(1, "\n", 1);
    return (0);
}