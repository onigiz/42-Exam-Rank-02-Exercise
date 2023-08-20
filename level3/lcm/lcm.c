unsigned int lower_nb(unsigned int x, unsigned int y)
{
    if (x >= y)
        return (y);
    else 
        return (x);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    int product = a * b;
    int hcf = 1;
    int i = 1;
    while (i <= lower_nb(a, b))
    {
        if(a % i == 0 && b %i == 0)
            hcf = i;
        i++;
    }
    if (a == 0 || b == 0)
        return (0);
    return(product / hcf);
}


/* #include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    (void) ac;
    unsigned int a = atoi(av[1]);
    unsigned int b = atoi(av[2]);

    printf("a: %d\nb:: %d\n", a, b);
    printf("lcm: %d\n", lcm(a,b));

} */