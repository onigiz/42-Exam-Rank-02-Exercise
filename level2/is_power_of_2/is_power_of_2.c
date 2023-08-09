int	    is_power_of_2(unsigned int n)
{
    if(n == 1)
        return (1);
    else if(n % 2 != 0)
        return (0);
    else if(n == 0)
        return (0);
    else
    {
        while (n > 10)
            n = n / 2;

        if(n % 2 == 0)
            return (1);
            
        return (0);
    }   
    
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{   
    int n = atoi(argv[1]);
    printf("n: %d\n", n);
    printf("2^x: %d\n", is_power_of_2(n));
}
*/

/*
n'in 0 ve 1 olduğu koşullar ayrı return ediliyor. 
Tek olduğu koşulda 0 return ediyoruz.
Çift olduğu koşulda çarpanları içinde tek sayı olup olmadığına bakıyoruz.
Bunu yapmak için sürekli bölüm işlemi yapıyoruz, sayıyı olabildiğince küçültmeye çalışıyoruz.
En son mod işlemi ile sona kalan sayının çift olup olmadığına bakıyoruz, nihai kararı veriyoruz.

1464 ---> sürekli 1464/2 işlemi uygulanıyor. 

*/