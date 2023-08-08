#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 219 - argv[1][i];
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 155 - argv[1][i];

            write(1, &argv[1][i], 1);
            i++;    
        }   
    }

    write(1, "\n", 1);
    return (0);
}

//Decimal değerlerinin toplamı üzerinden ilerle.
//a = 97, z = 122 || b = 98, y = 121 ---> a + z = 219 || b + y = 219 