#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc != 2)
        write(1, "\n", 1);

    int i;

    i = 0;
    while(argv[1][i] == 32 || argv[1][i] == 9)
        i++;

    while((argv[1][i] != 9 && argv[1][i] != 32) && argv[1][i])
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
}

//İkinci whiledaki 2. koşul buradaki olay, olmazsa seg fault oluyor! 
