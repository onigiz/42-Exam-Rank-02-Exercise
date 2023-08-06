#include <unistd.h>

char *numstr(int num)
{
    char numbers[10] = "0123456789";
    if (num > 9)
        numstr(num / 10);
    write(1, &numbers[num % 10], 1);
}

int main()
{
    int i;

    i = 0;
    while(i < 101)
    {
        i++;
        if((i % 3 == 0) && (i % 5 != 0))
            write(1, "fizz\n", 5);
        else if ((i % 5 == 0) && (i % 3 != 0))
            write(1, "buzz\n", 5);
        else if((i % 3 == 0) && (i % 5 == 0))
            write(1, "fizzbuzz\n", 9);
        else
        {
            numstr(i);    
            write(1, "\n", 1);
        }
    }
}

//numstr kısmı önemli! Orayı halledersen sıkıntı yok.