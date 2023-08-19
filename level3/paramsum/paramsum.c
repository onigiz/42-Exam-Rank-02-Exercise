#include <unistd.h>

void    print_number(int nb)
{
    if(nb >= 10)
        print_number(nb);
    char digit = nb % 10 + 48;
    write(1, &digit, 1);
}


int main(int ac, char **av)
{
    if (ac > 1)
    {
        (void) av;
        print_number(ac - 1);
    }
    write(1, "\n", 1);
    return (0);
}