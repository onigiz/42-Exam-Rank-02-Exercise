#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if((argv[1][i] >= 65) && (argv[1][i] <= 90)) 
            {
                int x = argv[1][i] - 64;
                int c = 0;
                while (c < x)
                {
                    write(1, &argv[1][i], 1);
                    c++;
                }
                i++;    
            }
            else if ((argv[1][i] >= 97) && (argv[1][i] <= 122))
            {
                int x = argv[1][i] - 96;
                int c = 0;
                while (c < x)
                {
                    write(1, &argv[1][i], 1);
                    c++;
                }
                i++;
            }
            else
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
        write(1, "\n", 1);
    }
    
}

//abcd --> abbcccdddd