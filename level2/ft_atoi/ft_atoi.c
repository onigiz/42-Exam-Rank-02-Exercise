#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int number = 0;
    int sign = 1;

    while (str[i])
    {   
        while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
            i++;
        
        if(str[i] == '-' || str[i] == '+')
        {
            if(str[i] == '-')
            {
                sign *= -1;
                i++;
            }
        }

        while(str[i] >= 48 && str[i] <= 57)
        {
            number = (str[i] - 48)  + (number * 10);
        
            if(str[i+1] > 57 || str[i+1] < 48)
                    return(number * sign);
        }
        i++;
    }
    
    return(number * sign);
}

int main(int argc, char **argv)
{
    (void) argc;

    printf("my atoi:%d\n", ft_atoi(argv[1]));
    printf("atoi:%d\n", atoi(argv[1]));

}

//işaret olayını öğrenip tekrar bir bak
//şu anda - sayısına göre işareti belirleniyor
//
