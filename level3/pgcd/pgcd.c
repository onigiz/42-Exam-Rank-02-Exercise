#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 1;
        int lower = 0;
        int number1 = atoi(av[1]);
        int number2 = atoi(av[2]);
        int result = 1;

        if (number1 <= number2)
            lower = number1;
        else    
            lower = number2;
            
        while (i <= lower)
        {
            if (number1 % i == 0 && number2 % i == 0)
                result = i;
            i++;
        }
        printf("%d", result);
    }
    printf("\n");
    return (0);
}